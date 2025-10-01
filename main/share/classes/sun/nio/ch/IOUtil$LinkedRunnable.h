#ifndef _sun_nio_ch_IOUtil$LinkedRunnable_h_
#define _sun_nio_ch_IOUtil$LinkedRunnable_h_
//$ class sun.nio.ch.IOUtil$LinkedRunnable
//$ extends java.lang.Record
//$ implements java.lang.Runnable

#include <java/lang/Record.h>
#include <java/lang/Runnable.h>

namespace sun {
	namespace nio {
		namespace ch {

class $export IOUtil$LinkedRunnable : public ::java::lang::Record, public ::java::lang::Runnable {
	$class(IOUtil$LinkedRunnable, $NO_CLASS_INIT, ::java::lang::Record, ::java::lang::Runnable)
public:
	IOUtil$LinkedRunnable();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::lang::Runnable* node, ::java::lang::Runnable* next);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual ::java::lang::Runnable* next();
	virtual ::java::lang::Runnable* node();
	static ::sun::nio::ch::IOUtil$LinkedRunnable* of(::java::lang::Runnable* first, ::java::lang::Runnable* second);
	virtual void run() override;
	virtual $String* toString() override;
	::java::lang::Runnable* node$ = nullptr;
	::java::lang::Runnable* next$ = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_IOUtil$LinkedRunnable_h_