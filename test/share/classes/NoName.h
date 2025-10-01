#ifndef _NoName_h_
#define _NoName_h_
//$ class NoName
//$ extends java.lang.Object

#include <java/lang/Array.h>

class NoName$InMemoryClassLoader;

class $export NoName : public ::java::lang::Object {
	$class(NoName, 0, ::java::lang::Object)
public:
	NoName();
	void init$();
	static void main($StringArray* args);
	virtual void run();
	static $bytes* NoName_bytes;
	static ::NoName$InMemoryClassLoader* loader;
	$Class* noName = nullptr;
};

#endif // _NoName_h_