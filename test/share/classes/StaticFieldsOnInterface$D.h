#ifndef _StaticFieldsOnInterface$D_h_
#define _StaticFieldsOnInterface$D_h_
//$ interface StaticFieldsOnInterface$D
//$ extends StaticFieldsOnInterface$B,StaticFieldsOnInterface$C

#include <StaticFieldsOnInterface$B.h>
#include <StaticFieldsOnInterface$C.h>

class $export StaticFieldsOnInterface$D : public ::StaticFieldsOnInterface$B, public ::StaticFieldsOnInterface$C {
	$interface(StaticFieldsOnInterface$D, $NO_CLASS_INIT, ::StaticFieldsOnInterface$B, ::StaticFieldsOnInterface$C)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

#endif // _StaticFieldsOnInterface$D_h_