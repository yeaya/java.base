#ifndef _IsParallelCapable$ParaSubCL_h_
#define _IsParallelCapable$ParaSubCL_h_
//$ class IsParallelCapable$ParaSubCL
//$ extends IsParallelCapable$ParaCL

#include <IsParallelCapable$ParaCL.h>

class $export IsParallelCapable$ParaSubCL : public ::IsParallelCapable$ParaCL {
	$class(IsParallelCapable$ParaSubCL, 0, ::IsParallelCapable$ParaCL)
public:
	IsParallelCapable$ParaSubCL();
	using ::IsParallelCapable$ParaCL::findClass;
	void init$();
	virtual bool expectCapable() override;
};

#endif // _IsParallelCapable$ParaSubCL_h_