#ifndef _java_lang_ThreadLocal$SuppliedThreadLocal_h_
#define _java_lang_ThreadLocal$SuppliedThreadLocal_h_
//$ class java.lang.ThreadLocal$SuppliedThreadLocal
//$ extends java.lang.ThreadLocal

#include <java/lang/ThreadLocal.h>

namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}

namespace java {
	namespace lang {

class $export ThreadLocal$SuppliedThreadLocal : public ::java::lang::ThreadLocal {
	$class(ThreadLocal$SuppliedThreadLocal, $NO_CLASS_INIT, ::java::lang::ThreadLocal)
public:
	ThreadLocal$SuppliedThreadLocal();
	void init$(::java::util::function::Supplier* supplier);
	virtual $Object* initialValue() override;
	::java::util::function::Supplier* supplier = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ThreadLocal$SuppliedThreadLocal_h_