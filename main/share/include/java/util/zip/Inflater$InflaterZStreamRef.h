#ifndef _java_util_zip_Inflater$InflaterZStreamRef_h_
#define _java_util_zip_Inflater$InflaterZStreamRef_h_
//$ class java.util.zip.Inflater$InflaterZStreamRef
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		namespace ref {
			class Cleaner$Cleanable;
		}
	}
}
namespace java {
	namespace util {
		namespace zip {
			class Inflater;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class $import Inflater$InflaterZStreamRef : public ::java::lang::Runnable {
	$class(Inflater$InflaterZStreamRef, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Inflater$InflaterZStreamRef();
	void init$(::java::util::zip::Inflater* owner, int64_t addr);
	virtual int64_t address();
	virtual void clean();
	virtual void run() override;
	int64_t address$ = 0;
	::java::lang::ref::Cleaner$Cleanable* cleanable = nullptr;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_Inflater$InflaterZStreamRef_h_