#ifndef _IsParallelCapable$NonParaSubCL1_h_
#define _IsParallelCapable$NonParaSubCL1_h_
//$ class IsParallelCapable$NonParaSubCL1
//$ extends IsParallelCapable$ParaCL

#include <IsParallelCapable$ParaCL.h>

class $export IsParallelCapable$NonParaSubCL1 : public ::IsParallelCapable$ParaCL {
	$class(IsParallelCapable$NonParaSubCL1, $NO_CLASS_INIT, ::IsParallelCapable$ParaCL)
public:
	IsParallelCapable$NonParaSubCL1();
	using ::IsParallelCapable$ParaCL::findClass;
	void init$();
	virtual bool expectCapable() override;
};

#endif // _IsParallelCapable$NonParaSubCL1_h_