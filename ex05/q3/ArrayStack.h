#include<string>
#include<utility>
#include<iostream>

#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

class ArrayStack{
 private:
  int _num_items; //number of items in the stack
  std::string* _items;//stack items
  int _allocated_size; // size of memory allocated


  void resize(int max_size){
    if(max_size==0) max_size++;

    //Move stack to a new array of size max
    _allocated_size=max_size;
    std::string* temp = new std::string[max_size];

    //Copy
    for(int i=0;i<_num_items; ++i){
      temp[i] = _items[i];
    }
    delete[] _items;
    _items = temp;
  }

  public:
  //Constructors:
  //Default constructor

 ArrayStack()
   {
     _num_items=0;
     _allocated_size=0;
     _items=nullptr;
   }

  explicit ArrayStack(int allocated_size)
  {
    _num_items = 0;
    _items = new std::string[allocated_size];
  }


  ArrayStack(const ArrayStack& another_stack){
    _items = new std::string[another_stack._allocated_size];
    
    _num_items = another_stack._num_items;
    _allocated_size = another_stack._allocated_size;
    *_items = *another_stack._items;
    
    for(int i=0;i<another_stack._allocated_size; i++){
      _items[i]= another_stack._items[i];
    }
  }

  ArrayStack& operator=(const ArrayStack& op2){
    _items = new std::string[op2._allocated_size];
    _num_items = op2._num_items;
    _allocated_size = op2._allocated_size;
    *_items = *op2._items;

    for(int i=0;i<op2._allocated_size;i++){
      _items[i]=op2._items[i];
    }

    return *this;
  }

  //Move Constructor
  ArrayStack(ArrayStack&& o){
    _items = new std::string[o._sllocated_size];
    _num_items= o._num_items;
    _allocated_size = o._allocated_size;
    *_items = *o._items;

    for(int i=0;i<o._allocated_size; i++){
      _items[i]=o._items[i];
      o._items[i]=nulptr;
    }
    o._num_items=0;
    o._allocated_size=0
  }

  ArrayStack& operator=(ArrayStack&& o){
    _items = new std::string[o._sllocated_size];
    _num_items= o._num_items;
    _allocated_size = o._allocated_size;
    *_items = *o._items;

    for(int i=0;i<o._allocated_size; i++){
      _items[i]=o._items[i];
      o._items[i]=nulptr;
    }
    o._num_items=0;
    o._allocated_size=0
  }

    
  //Destructor:
  ~ArrayStack(){
    delete _items;
  }

  //Push item to the stack
  void push(const std::string& item){
    if(_num_items == _allocated_size) resize(2*_allocated_size);
    _items[_num_items++]= item;
  }

  //Pop item
  void pop(){
    _num_items--;
    if(_num_items>0 && _num_items==_allocated_size/4) resize(_allocated_size/2);
  }

  //Access the top-most item
  std::string top(){
    return _items[_num_items-1];
  }

  //Check if the stack is empty
  bool empty() const { return _num_items==0;}

  //Return the number of elements in the stack
  int size() const{return _num_items;}

};

#endif // ARRAY_STACK_H
