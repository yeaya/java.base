#ifndef _Identity_h_
#define _Identity_h_
//$ class Identity
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class ThreadLocal;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class Random;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
			class ThreadFactory;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
			}
		}
	}
}

class $export Identity : public ::java::lang::Object {
	$class(Identity, 0, ::java::lang::Object)
public:
	Identity();
	void init$();
	static ::java::util::concurrent::ThreadFactory* createThreadFactory(int32_t groupId);
	static void fail($String* msg);
	static ::java::nio::ByteBuffer* getBuffer();
	static void main($StringArray* args);
	static ::java::util::Random* rand;
	static ::java::util::concurrent::CountDownLatch* done;
	static ::java::util::concurrent::atomic::AtomicBoolean* failed;
	static ::java::lang::ThreadLocal* myGroup;
};

#endif // _Identity_h_