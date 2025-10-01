#ifndef _ReadCloseRaceNPE_h_
#define _ReadCloseRaceNPE_h_
//$ class ReadCloseRaceNPE
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BUF_SIZE")
#undef BUF_SIZE
#pragma push_macro("TIMEOUT_MS")
#undef TIMEOUT_MS

namespace java {
	namespace io {
		class Reader;
	}
}
namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
				class AtomicReference;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}

class $export ReadCloseRaceNPE : public ::java::lang::Object {
	$class(ReadCloseRaceNPE, 0, ::java::lang::Object)
public:
	ReadCloseRaceNPE();
	void init$();
	static ::java::io::Reader* lambda$main$2();
	static ::java::io::Reader* lambda$main$3();
	static void lambda$main$4(::java::lang::Exception* x);
	static void lambda$testReader$0(::java::util::concurrent::atomic::AtomicReference* readerRef, ::java::util::function::Supplier* readerSupplier, ::java::util::concurrent::atomic::AtomicBoolean* isFinished);
	static void lambda$testReader$1(::java::util::concurrent::atomic::AtomicBoolean* isFinished, ::java::util::concurrent::atomic::AtomicReference* readerRef);
	static void main($StringArray* args);
	static void testReader(::java::util::function::Supplier* readerSupplier);
	static const int32_t BUF_SIZE = 1000;
	static const int64_t TIMEOUT_MS = 3000;
	static ::java::util::List* failures;
};

#pragma pop_macro("BUF_SIZE")
#pragma pop_macro("TIMEOUT_MS")

#endif // _ReadCloseRaceNPE_h_