#ifndef _util_MemberFactory$Kind_h_
#define _util_MemberFactory$Kind_h_
//$ class util.MemberFactory$Kind
//$ extends java.lang.Enum
//$ implements java.util.function.BiFunction

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/util/function/BiFunction.h>

#pragma push_macro("CONSTRUCTOR")
#undef CONSTRUCTOR
#pragma push_macro("FIELD")
#undef FIELD
#pragma push_macro("METHOD")
#undef METHOD

namespace util {

class $export MemberFactory$Kind : public ::java::lang::Enum, public ::java::util::function::BiFunction {
	$class(MemberFactory$Kind, 0, ::java::lang::Enum, ::java::util::function::BiFunction)
public:
	MemberFactory$Kind();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	static $Array<::util::MemberFactory$Kind>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual $String* toString() override;
	static ::util::MemberFactory$Kind* valueOf($String* name);
	static $Array<::util::MemberFactory$Kind>* values();
	static ::util::MemberFactory$Kind* FIELD;
	static ::util::MemberFactory$Kind* METHOD;
	static ::util::MemberFactory$Kind* CONSTRUCTOR;
	static $Array<::util::MemberFactory$Kind>* $VALUES;
};

} // util

#pragma pop_macro("CONSTRUCTOR")
#pragma pop_macro("FIELD")
#pragma pop_macro("METHOD")

#endif // _util_MemberFactory$Kind_h_