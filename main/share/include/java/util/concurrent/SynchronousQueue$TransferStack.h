#ifndef _java_util_concurrent_SynchronousQueue$TransferStack_h_
#define _java_util_concurrent_SynchronousQueue$TransferStack_h_
//$ class java.util.concurrent.SynchronousQueue$TransferStack
//$ extends java.util.concurrent.SynchronousQueue$Transferer

#include <java/util/concurrent/SynchronousQueue$Transferer.h>

#pragma push_macro("DATA")
#undef DATA
#pragma push_macro("FULFILLING")
#undef FULFILLING
#pragma push_macro("REQUEST")
#undef REQUEST
#pragma push_macro("SHEAD")
#undef SHEAD

namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class SynchronousQueue$TransferStack$SNode;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import SynchronousQueue$TransferStack : public ::java::util::concurrent::SynchronousQueue$Transferer {
	$class(SynchronousQueue$TransferStack, 0, ::java::util::concurrent::SynchronousQueue$Transferer)
public:
	SynchronousQueue$TransferStack();
	void init$();
	bool casHead(::java::util::concurrent::SynchronousQueue$TransferStack$SNode* h, ::java::util::concurrent::SynchronousQueue$TransferStack$SNode* nh);
	void clean(::java::util::concurrent::SynchronousQueue$TransferStack$SNode* s);
	static bool isFulfilling(int32_t m);
	static ::java::util::concurrent::SynchronousQueue$TransferStack$SNode* snode(::java::util::concurrent::SynchronousQueue$TransferStack$SNode* s, Object$* e, ::java::util::concurrent::SynchronousQueue$TransferStack$SNode* next, int32_t mode);
	virtual $Object* transfer(Object$* e, bool timed, int64_t nanos) override;
	static const int32_t REQUEST = 0;
	static const int32_t DATA = 1;
	static const int32_t FULFILLING = 2;
	$volatile(::java::util::concurrent::SynchronousQueue$TransferStack$SNode*) head = nullptr;
	static ::java::lang::invoke::VarHandle* SHEAD;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("DATA")
#pragma pop_macro("FULFILLING")
#pragma pop_macro("REQUEST")
#pragma pop_macro("SHEAD")

#endif // _java_util_concurrent_SynchronousQueue$TransferStack_h_