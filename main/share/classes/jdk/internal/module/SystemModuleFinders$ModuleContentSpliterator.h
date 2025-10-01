#ifndef _jdk_internal_module_SystemModuleFinders$ModuleContentSpliterator_h_
#define _jdk_internal_module_SystemModuleFinders$ModuleContentSpliterator_h_
//$ class jdk.internal.module.SystemModuleFinders$ModuleContentSpliterator
//$ extends java.util.Spliterator

#include <java/util/Spliterator.h>

namespace java {
	namespace util {
		class Deque;
		class Iterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class SystemModuleFinders$ModuleContentSpliterator : public ::java::util::Spliterator {
	$class(SystemModuleFinders$ModuleContentSpliterator, 0, ::java::util::Spliterator)
public:
	SystemModuleFinders$ModuleContentSpliterator();
	void init$($String* module);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	$String* next();
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
	static bool $assertionsDisabled;
	$String* moduleRoot = nullptr;
	::java::util::Deque* stack = nullptr;
	::java::util::Iterator* iterator = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_SystemModuleFinders$ModuleContentSpliterator_h_