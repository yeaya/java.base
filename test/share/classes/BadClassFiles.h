#ifndef _BadClassFiles_h_
#define _BadClassFiles_h_
//$ class BadClassFiles
//$ extends java.lang.Object

#include <java/lang/Array.h>

class BadClassFiles$InMemoryClassLoader;

class $export BadClassFiles : public ::java::lang::Object {
	$class(BadClassFiles, 0, ::java::lang::Object)
public:
	BadClassFiles();
	void init$();
	virtual void assertBadParameters($Class* cls);
	static void main($StringArray* args);
	virtual void run();
	int32_t errors = 0;
	static $bytes* EmptyName_bytes;
	static $bytes* BadModifiers_bytes;
	static $bytes* BadNameIndex_bytes;
	static $bytes* NameIndexOutOfBounds_bytes;
	static $bytes* ExtraParams_bytes;
	static $bytes* BadName1_bytes;
	static $bytes* BadName2_bytes;
	static $bytes* BadName3_bytes;
	static $bytes* BadName4_bytes;
	static $bytes* BadParams_bytes;
	static ::BadClassFiles$InMemoryClassLoader* loader;
	$ClassArray* classes = nullptr;
};

#endif // _BadClassFiles_h_