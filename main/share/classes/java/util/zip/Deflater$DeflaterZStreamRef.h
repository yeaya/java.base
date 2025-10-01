#ifndef _java_util_zip_Deflater$DeflaterZStreamRef_h_
#define _java_util_zip_Deflater$DeflaterZStreamRef_h_
//$ class java.util.zip.Deflater$DeflaterZStreamRef
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
			class Deflater;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class $export Deflater$DeflaterZStreamRef : public ::java::lang::Runnable {
	$class(Deflater$DeflaterZStreamRef, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Deflater$DeflaterZStreamRef();
	void init$(::java::util::zip::Deflater* owner, int64_t addr);
	virtual int64_t address();
	virtual void clean();
	virtual void run() override;
	int64_t address$ = 0;
	::java::lang::ref::Cleaner$Cleanable* cleanable = nullptr;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_Deflater$DeflaterZStreamRef_h_