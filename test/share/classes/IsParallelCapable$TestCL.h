#ifndef _IsParallelCapable$TestCL_h_
#define _IsParallelCapable$TestCL_h_
//$ class IsParallelCapable$TestCL
//$ extends java.lang.ClassLoader

#include <java/lang/ClassLoader.h>

class $export IsParallelCapable$TestCL : public ::java::lang::ClassLoader {
	$class(IsParallelCapable$TestCL, 0, ::java::lang::ClassLoader)
public:
	IsParallelCapable$TestCL();
	using ::java::lang::ClassLoader::findClass;
	void init$();
	virtual bool expectCapable() {return false;}
	virtual $Class* findClass($String* name) override;
};

#endif // _IsParallelCapable$TestCL_h_