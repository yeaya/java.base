#ifndef _util_ClassSupplier_h_
#define _util_ClassSupplier_h_
//$ class util.ClassSupplier
//$ extends java.lang.Enum
//$ implements java.util.function.Supplier

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/util/function/Supplier.h>

#pragma push_macro("PACKAGE_CLASS_IN_PKG_A")
#undef PACKAGE_CLASS_IN_PKG_A
#pragma push_macro("PACKAGE_CLASS_IN_PKG_B")
#undef PACKAGE_CLASS_IN_PKG_B
#pragma push_macro("PUBLIC_SUBCLASS_IN_PKG_B")
#undef PUBLIC_SUBCLASS_IN_PKG_B
#pragma push_macro("PUBLIC_SUPERCLASS_IN_PKG_A")
#undef PUBLIC_SUPERCLASS_IN_PKG_A

namespace util {

class $export ClassSupplier : public ::java::lang::Enum, public ::java::util::function::Supplier {
	$class(ClassSupplier, 0, ::java::lang::Enum, ::java::util::function::Supplier)
public:
	ClassSupplier();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	static $Array<::util::ClassSupplier>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* className);
	virtual $Object* get() override;
	virtual $String* toString() override;
	static ::util::ClassSupplier* valueOf($String* name);
	static $Array<::util::ClassSupplier>* values();
	static ::util::ClassSupplier* PACKAGE_CLASS_IN_PKG_A;
	static ::util::ClassSupplier* PUBLIC_SUPERCLASS_IN_PKG_A;
	static ::util::ClassSupplier* PACKAGE_CLASS_IN_PKG_B;
	static ::util::ClassSupplier* PUBLIC_SUBCLASS_IN_PKG_B;
	static $Array<::util::ClassSupplier>* $VALUES;
	$String* className = nullptr;
};

} // util

#pragma pop_macro("PACKAGE_CLASS_IN_PKG_A")
#pragma pop_macro("PACKAGE_CLASS_IN_PKG_B")
#pragma pop_macro("PUBLIC_SUBCLASS_IN_PKG_B")
#pragma pop_macro("PUBLIC_SUPERCLASS_IN_PKG_A")

#endif // _util_ClassSupplier_h_