#ifndef _HashCodeTest$Node_h_
#define _HashCodeTest$Node_h_
//$ interface HashCodeTest$Node
//$ extends java.lang.Object

#include <java/lang/Object.h>

class HashCodeTest$Edge;

class $export HashCodeTest$Node : public ::java::lang::Object {
	$interface(HashCodeTest$Node, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::HashCodeTest$Edge* getOutEdge() {return nullptr;}
};

#endif // _HashCodeTest$Node_h_