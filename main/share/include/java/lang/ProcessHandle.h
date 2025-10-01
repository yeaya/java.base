#ifndef _java_lang_ProcessHandle_h_
#define _java_lang_ProcessHandle_h_
//$ interface java.lang.ProcessHandle
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace java {
	namespace lang {
		class ProcessHandle$Info;
	}
}
namespace java {
	namespace util {
		class Optional;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CompletableFuture;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace java {
	namespace lang {

class $import ProcessHandle : public ::java::lang::Comparable {
	$interface(ProcessHandle, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	static ::java::util::stream::Stream* allProcesses();
	virtual ::java::util::stream::Stream* children() {return nullptr;}
	virtual int32_t compareTo(::java::lang::ProcessHandle* other) {return 0;}
	virtual int32_t compareTo(Object$* other) override;
	static ::java::lang::ProcessHandle* current();
	virtual ::java::util::stream::Stream* descendants() {return nullptr;}
	virtual bool destroy() {return false;}
	virtual bool destroyForcibly() {return false;}
	virtual bool equals(Object$* other) override;
	virtual int32_t hashCode() override;
	virtual ::java::lang::ProcessHandle$Info* info() {return nullptr;}
	virtual bool isAlive() {return false;}
	static ::java::util::Optional* of(int64_t pid);
	virtual ::java::util::concurrent::CompletableFuture* onExit() {return nullptr;}
	virtual ::java::util::Optional* parent() {return nullptr;}
	virtual int64_t pid() {return 0;}
	virtual bool supportsNormalTermination() {return false;}
};

	} // lang
} // java

#endif // _java_lang_ProcessHandle_h_