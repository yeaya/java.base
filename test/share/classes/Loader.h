#ifndef _Loader_h_
#define _Loader_h_
//$ class Loader
//$ extends java.lang.ClassLoader

#include <java/lang/Array.h>
#include <java/lang/ClassLoader.h>

#pragma push_macro("RESOURCES")
#undef RESOURCES
#pragma push_macro("FIND")
#undef FIND
#pragma push_macro("RESOURCE")
#undef RESOURCE

class $export Loader : public ::java::lang::ClassLoader {
	$class(Loader, $NO_CLASS_INIT, ::java::lang::ClassLoader)
public:
	Loader();
	void init$();
	using ::java::lang::ClassLoader::loadClass;
	virtual $Class* loadClass($String* name, bool resolve) override;
	$bytes* locateBytes();
	static void main($StringArray* args);
	static void report($String* s);
	static const int32_t FIND = 1;
	static const int32_t RESOURCE = 2;
	static const int32_t RESOURCES = 4;
};

#pragma pop_macro("RESOURCES")
#pragma pop_macro("FIND")
#pragma pop_macro("RESOURCE")

#endif // _Loader_h_