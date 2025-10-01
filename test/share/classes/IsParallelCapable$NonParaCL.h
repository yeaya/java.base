#ifndef _IsParallelCapable$NonParaCL_h_
#define _IsParallelCapable$NonParaCL_h_
//$ class IsParallelCapable$NonParaCL
//$ extends IsParallelCapable$TestCL

#include <IsParallelCapable$TestCL.h>

class $export IsParallelCapable$NonParaCL : public ::IsParallelCapable$TestCL {
	$class(IsParallelCapable$NonParaCL, $NO_CLASS_INIT, ::IsParallelCapable$TestCL)
public:
	IsParallelCapable$NonParaCL();
	using ::IsParallelCapable$TestCL::findClass;
	void init$();
	virtual bool expectCapable() override;
};

#endif // _IsParallelCapable$NonParaCL_h_