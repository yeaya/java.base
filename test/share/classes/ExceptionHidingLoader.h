#ifndef _ExceptionHidingLoader_h_
#define _ExceptionHidingLoader_h_
//$ class ExceptionHidingLoader
//$ extends java.lang.ClassLoader

#include <java/lang/Array.h>
#include <java/lang/ClassLoader.h>

class $export ExceptionHidingLoader : public ::java::lang::ClassLoader {
	$class(ExceptionHidingLoader, $NO_CLASS_INIT, ::java::lang::ClassLoader)
public:
	ExceptionHidingLoader();
	using ::java::lang::ClassLoader::findClass;
	void init$();
	virtual $Class* findClass($String* name) override;
	static void main($StringArray* args);
};

#endif // _ExceptionHidingLoader_h_