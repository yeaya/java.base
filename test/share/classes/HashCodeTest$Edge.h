#ifndef _HashCodeTest$Edge_h_
#define _HashCodeTest$Edge_h_
//$ interface HashCodeTest$Edge
//$ extends java.lang.Object

#include <java/lang/Object.h>

class HashCodeTest$Node;

class $export HashCodeTest$Edge : public ::java::lang::Object {
	$interface(HashCodeTest$Edge, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void setEndNode(::HashCodeTest$Node* n) {}
};

#endif // _HashCodeTest$Edge_h_