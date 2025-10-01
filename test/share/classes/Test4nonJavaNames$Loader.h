#ifndef _Test4nonJavaNames$Loader_h_
#define _Test4nonJavaNames$Loader_h_
//$ class Test4nonJavaNames$Loader
//$ extends java.lang.ClassLoader

#include <java/lang/ClassLoader.h>

class Test4nonJavaNames$Loader : public ::java::lang::ClassLoader {
	$class(Test4nonJavaNames$Loader, $NO_CLASS_INIT, ::java::lang::ClassLoader)
public:
	Test4nonJavaNames$Loader();
	using ::java::lang::ClassLoader::findClass;
	void init$();
	virtual $Class* findClass($String* name) override;
};

#endif // _Test4nonJavaNames$Loader_h_