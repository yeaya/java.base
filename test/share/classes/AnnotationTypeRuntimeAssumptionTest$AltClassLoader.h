#ifndef _AnnotationTypeRuntimeAssumptionTest$AltClassLoader_h_
#define _AnnotationTypeRuntimeAssumptionTest$AltClassLoader_h_
//$ class AnnotationTypeRuntimeAssumptionTest$AltClassLoader
//$ extends java.lang.ClassLoader

#include <java/lang/ClassLoader.h>

class $export AnnotationTypeRuntimeAssumptionTest$AltClassLoader : public ::java::lang::ClassLoader {
	$class(AnnotationTypeRuntimeAssumptionTest$AltClassLoader, $NO_CLASS_INIT, ::java::lang::ClassLoader)
public:
	AnnotationTypeRuntimeAssumptionTest$AltClassLoader();
	using ::java::lang::ClassLoader::findClass;
	void init$(::java::lang::ClassLoader* parent);
	virtual $Class* findClass($String* name) override;
	using ::java::lang::ClassLoader::loadClass;
	virtual $Class* loadClass($String* name, bool resolve) override;
};

#endif // _AnnotationTypeRuntimeAssumptionTest$AltClassLoader_h_