#ifndef _MetafactoryParameterCastTest_h_
#define _MetafactoryParameterCastTest_h_
//$ class MetafactoryParameterCastTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class MetafactoryParameterCastTest$ASink;
class MetafactoryParameterCastTest$BSink;
namespace java {
	namespace lang {
		namespace invoke {
			class CallSite;
			class MethodHandle;
			class MethodHandles$Lookup;
			class MethodType;
		}
	}
}

class $export MetafactoryParameterCastTest : public ::java::lang::Object {
	$class(MetafactoryParameterCastTest, 0, ::java::lang::Object)
public:
	MetafactoryParameterCastTest();
	void init$();
	virtual ::java::lang::invoke::CallSite* invokeAltMetafactory(::java::lang::invoke::MethodHandle* mh, $Class* sam, $String* methodName, $ClassArray* captured, ::java::lang::invoke::MethodType* instMT, ::java::lang::invoke::MethodType* samMT, $Array<::java::lang::invoke::MethodType>* bridgeMTs);
	virtual ::java::lang::invoke::CallSite* invokeMetafactory(::java::lang::invoke::MethodHandle* mh, $Class* sam, $String* methodName, $ClassArray* captured, ::java::lang::invoke::MethodType* instMT, ::java::lang::invoke::MethodType* samMT);
	virtual $String* lastMFParams();
	static void main($StringArray* args);
	virtual void test();
	virtual void tryASink(::java::lang::invoke::CallSite* cs);
	virtual void tryASink(::MetafactoryParameterCastTest$ASink* sink);
	virtual void tryBSink(::java::lang::invoke::CallSite* cs);
	virtual void tryBSink(::MetafactoryParameterCastTest$BSink* sink);
	virtual void tryCapASink(::java::lang::invoke::CallSite* cs);
	virtual void tryCapBSink(::java::lang::invoke::CallSite* cs);
	static ::java::lang::invoke::MethodHandles$Lookup* lookup;
	::java::lang::invoke::MethodHandle* lastMH = nullptr;
	$ClassArray* lastCaptured = nullptr;
	::java::lang::invoke::MethodType* lastInstMT = nullptr;
	::java::lang::invoke::MethodType* lastSamMT = nullptr;
	$Array<::java::lang::invoke::MethodType>* lastBridgeMTs = nullptr;
};

#endif // _MetafactoryParameterCastTest_h_