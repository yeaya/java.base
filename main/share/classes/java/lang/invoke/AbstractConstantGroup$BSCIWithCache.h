#ifndef _java_lang_invoke_AbstractConstantGroup$BSCIWithCache_h_
#define _java_lang_invoke_AbstractConstantGroup$BSCIWithCache_h_
//$ class java.lang.invoke.AbstractConstantGroup$BSCIWithCache
//$ extends java.lang.invoke.AbstractConstantGroup$WithCache
//$ implements java.lang.invoke.BootstrapCallInfo

#include <java/lang/invoke/AbstractConstantGroup$WithCache.h>
#include <java/lang/invoke/BootstrapCallInfo.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class AbstractConstantGroup$BSCIWithCache : public ::java::lang::invoke::AbstractConstantGroup$WithCache, public ::java::lang::invoke::BootstrapCallInfo {
	$class(AbstractConstantGroup$BSCIWithCache, 0, ::java::lang::invoke::AbstractConstantGroup$WithCache, ::java::lang::invoke::BootstrapCallInfo)
public:
	AbstractConstantGroup$BSCIWithCache();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual ::java::util::List* asList() override;
	virtual ::java::util::List* asList(Object$* ifNotPresent) override;
	virtual $Object* clone() override;
	virtual int32_t copyConstants(int32_t start, int32_t end, $ObjectArray* buf, int32_t pos) override;
	virtual int32_t copyConstants(int32_t start, int32_t end, $ObjectArray* buf, int32_t pos, Object$* ifNotPresent) override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual $Object* get(int32_t i) override;
	virtual $Object* get(int32_t i, Object$* ifNotAvailable) override;
	virtual int32_t hashCode() override;
	virtual bool isPresent(int32_t i) override;
	void init$(::java::lang::invoke::MethodHandle* bsm, $String* name, Object$* type, int32_t size);
	virtual ::java::lang::invoke::MethodHandle* bootstrapMethod() override;
	virtual $String* invocationName() override;
	virtual $Object* invocationType() override;
	virtual int32_t size() override;
	virtual ::java::lang::invoke::ConstantGroup* subGroup(int32_t start, int32_t end) override;
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	::java::lang::invoke::MethodHandle* bsm = nullptr;
	$String* name = nullptr;
	$Object* type = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_AbstractConstantGroup$BSCIWithCache_h_