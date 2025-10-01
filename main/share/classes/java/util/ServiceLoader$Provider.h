#ifndef _java_util_ServiceLoader$Provider_h_
#define _java_util_ServiceLoader$Provider_h_
//$ interface java.util.ServiceLoader$Provider
//$ extends java.util.function.Supplier

#include <java/util/function/Supplier.h>

namespace java {
	namespace util {

class $export ServiceLoader$Provider : public ::java::util::function::Supplier {
	$interface(ServiceLoader$Provider, $NO_CLASS_INIT, ::java::util::function::Supplier)
public:
	virtual $Object* get() override {return nullptr;}
	virtual $Class* type() {return nullptr;}
};

	} // util
} // java

#endif // _java_util_ServiceLoader$Provider_h_