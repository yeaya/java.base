#ifndef _IsParallelCapable$ParaCL_h_
#define _IsParallelCapable$ParaCL_h_
//$ class IsParallelCapable$ParaCL
//$ extends IsParallelCapable$TestCL

#include <IsParallelCapable$TestCL.h>

class $export IsParallelCapable$ParaCL : public ::IsParallelCapable$TestCL {
	$class(IsParallelCapable$ParaCL, 0, ::IsParallelCapable$TestCL)
public:
	IsParallelCapable$ParaCL();
	using ::IsParallelCapable$TestCL::findClass;
	void init$();
	virtual bool expectCapable() override;
};

#endif // _IsParallelCapable$ParaCL_h_