#ifndef _sun_nio_ch_IOUtil$Releaser_h_
#define _sun_nio_ch_IOUtil$Releaser_h_
//$ class sun.nio.ch.IOUtil$Releaser
//$ extends java.lang.Record
//$ implements java.lang.Runnable

#include <java/lang/Record.h>
#include <java/lang/Runnable.h>

namespace jdk {
	namespace internal {
		namespace misc {
			class ScopedMemoryAccess$Scope$Handle;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class $import IOUtil$Releaser : public ::java::lang::Record, public ::java::lang::Runnable {
	$class(IOUtil$Releaser, $NO_CLASS_INIT, ::java::lang::Record, ::java::lang::Runnable)
public:
	IOUtil$Releaser();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::jdk::internal::misc::ScopedMemoryAccess$Scope$Handle* handle);
	virtual bool equals(Object$* o) override;
	virtual ::jdk::internal::misc::ScopedMemoryAccess$Scope$Handle* handle();
	virtual int32_t hashCode() override;
	static void lambda$ofNullable$0();
	static ::java::lang::Runnable* of(::jdk::internal::misc::ScopedMemoryAccess$Scope$Handle* handle);
	static ::java::lang::Runnable* ofNullable(::jdk::internal::misc::ScopedMemoryAccess$Scope$Handle* handle);
	virtual void run() override;
	virtual $String* toString() override;
	::jdk::internal::misc::ScopedMemoryAccess$Scope$Handle* handle$ = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_IOUtil$Releaser_h_