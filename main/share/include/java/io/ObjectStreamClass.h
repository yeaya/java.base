#ifndef _java_io_ObjectStreamClass_h_
#define _java_io_ObjectStreamClass_h_
//$ class java.io.ObjectStreamClass
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("NO_FIELDS")
#undef NO_FIELDS

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamClass$ClassDataSlot;
		class ObjectStreamClass$DeserializationConstructorsCache;
		class ObjectStreamClass$ExceptionInfo;
		class ObjectStreamClass$FieldReflector;
		class ObjectStreamField;
	}
}
namespace java {
	namespace lang {
		class ClassNotFoundException;
		class Long;
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
			class Method;
		}
	}
}
namespace java {
	namespace security {
		class ProtectionDomain;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace reflect {
			class ReflectionFactory;
		}
	}
}

namespace java {
	namespace io {

class $import ObjectStreamClass : public ::java::io::Serializable {
	$class(ObjectStreamClass, 0, ::java::io::Serializable)
public:
	ObjectStreamClass();
	void init$($Class* cl);
	void init$();
	static ::java::lang::invoke::MethodHandle* canonicalRecordCtr($Class* cls);
	virtual void checkDefaultSerialize();
	virtual void checkDeserialize();
	void checkInitialized();
	virtual void checkObjFieldValueTypes(Object$* obj, $ObjectArray* vals);
	virtual void checkSerialize();
	static bool classNamesEqual($String* name1, $String* name2);
	static int64_t computeDefaultSUID($Class* cl);
	void computeFieldOffsets();
	virtual $Class* forClass();
	virtual $Array<::java::io::ObjectStreamClass$ClassDataSlot>* getClassDataLayout();
	$Array<::java::io::ObjectStreamClass$ClassDataSlot>* getClassDataLayout0();
	static ::java::lang::Long* getDeclaredSUID($Class* cl);
	static $Array<::java::io::ObjectStreamField>* getDeclaredSerialFields($Class* cl);
	static $Array<::java::io::ObjectStreamField>* getDefaultSerialFields($Class* cl);
	static ::java::lang::reflect::Constructor* getExternalizableConstructor($Class* cl);
	virtual ::java::io::ObjectStreamField* getField($String* name);
	virtual ::java::io::ObjectStreamField* getField($String* name, $Class* type);
	virtual $Array<::java::io::ObjectStreamField>* getFields();
	virtual $Array<::java::io::ObjectStreamField>* getFields(bool copy);
	static ::java::lang::reflect::Method* getInheritableMethod($Class* cl, $String* name, $ClassArray* argTypes, $Class* returnType);
	virtual ::java::io::ObjectStreamClass* getLocalDesc();
	static $String* getMethodSignature($ClassArray* paramTypes, $Class* retType);
	virtual $String* getName();
	virtual int32_t getNumObjFields();
	virtual void getObjFieldValues(Object$* obj, $ObjectArray* vals);
	virtual int32_t getPrimDataSize();
	virtual void getPrimFieldValues(Object$* obj, $bytes* buf);
	static ::java::lang::reflect::Method* getPrivateMethod($Class* cl, $String* name, $ClassArray* argTypes, $Class* returnType);
	$Array<::java::security::ProtectionDomain>* getProtectionDomains(::java::lang::reflect::Constructor* cons, $Class* cl);
	virtual ::java::lang::invoke::MethodHandle* getRecordConstructor();
	static ::java::io::ObjectStreamClass$FieldReflector* getReflector($Array<::java::io::ObjectStreamField>* fields, ::java::io::ObjectStreamClass* localDesc);
	virtual ::java::lang::ClassNotFoundException* getResolveException();
	static $Array<::java::io::ObjectStreamField>* getSerialFields($Class* cl);
	virtual int64_t getSerialVersionUID();
	static ::java::lang::reflect::Constructor* getSerializableConstructor($Class* cl);
	virtual ::java::io::ObjectStreamClass* getSuperDesc();
	::java::io::ObjectStreamClass* getVariantFor($Class* cl);
	virtual bool hasBlockExternalData();
	virtual bool hasReadObjectMethod();
	virtual bool hasReadObjectNoDataMethod();
	virtual bool hasReadResolveMethod();
	static bool hasStaticInitializer($Class* cl);
	virtual bool hasWriteObjectData();
	virtual bool hasWriteObjectMethod();
	virtual bool hasWriteReplaceMethod();
	static void initNative();
	virtual void initNonProxy(::java::io::ObjectStreamClass* model, $Class* cl, ::java::lang::ClassNotFoundException* resolveEx, ::java::io::ObjectStreamClass* superDesc);
	virtual void initProxy($Class* cl, ::java::lang::ClassNotFoundException* resolveEx, ::java::io::ObjectStreamClass* superDesc);
	virtual void invokeReadObject(Object$* obj, ::java::io::ObjectInputStream* in);
	virtual void invokeReadObjectNoData(Object$* obj);
	virtual $Object* invokeReadResolve(Object$* obj);
	virtual void invokeWriteObject(Object$* obj, ::java::io::ObjectOutputStream* out);
	virtual $Object* invokeWriteReplace(Object$* obj);
	virtual bool isEnum();
	virtual bool isExternalizable();
	virtual bool isInstantiable();
	virtual bool isProxy();
	virtual bool isRecord();
	virtual bool isSerializable();
	static $ClassArray* lambda$canonicalRecordCtr$1(int32_t x$0);
	static ::java::lang::invoke::MethodHandle* lambda$canonicalRecordCtr$2($Class* cls);
	$Object* lambda$newInstance$0();
	static ::java::io::ObjectStreamClass* lookup($Class* cl);
	static ::java::io::ObjectStreamClass* lookup($Class* cl, bool all);
	static ::java::io::ObjectStreamClass* lookupAny($Class* cl);
	static $Array<::java::io::ObjectStreamField>* matchFields($Array<::java::io::ObjectStreamField>* fields, ::java::io::ObjectStreamClass* localDesc);
	virtual $Object* newInstance();
	::java::security::ProtectionDomain* noPermissionsDomain();
	static bool packageEquals($Class* cl1, $Class* cl2);
	static void processQueue(::java::lang::ref::ReferenceQueue* queue, ::java::util::concurrent::ConcurrentMap* map);
	virtual void readNonProxy(::java::io::ObjectInputStream* in);
	void requireInitialized();
	virtual void setObjFieldValues(Object$* obj, $ObjectArray* vals);
	virtual void setPrimFieldValues(Object$* obj, $bytes* buf);
	static void throwMiscException($Throwable* th);
	virtual $String* toString() override;
	virtual void writeNonProxy(::java::io::ObjectOutputStream* out);
	static bool $assertionsDisabled;
	static $Array<::java::io::ObjectStreamField>* NO_FIELDS;
	static const int64_t serialVersionUID = (int64_t)0xAB0E6F1AEEFE7B88;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static ::jdk::internal::reflect::ReflectionFactory* reflFactory;
	$Class* cl = nullptr;
	$String* name = nullptr;
	$volatile(::java::lang::Long*) suid = nullptr;
	bool isProxy$ = false;
	bool isEnum$ = false;
	bool isRecord$ = false;
	bool serializable = false;
	bool externalizable = false;
	bool hasWriteObjectData$ = false;
	bool hasBlockExternalData$ = false;
	::java::lang::ClassNotFoundException* resolveEx = nullptr;
	::java::io::ObjectStreamClass$ExceptionInfo* deserializeEx = nullptr;
	::java::io::ObjectStreamClass$ExceptionInfo* serializeEx = nullptr;
	::java::io::ObjectStreamClass$ExceptionInfo* defaultSerializeEx = nullptr;
	$Array<::java::io::ObjectStreamField>* fields = nullptr;
	int32_t primDataSize = 0;
	int32_t numObjFields = 0;
	::java::io::ObjectStreamClass$FieldReflector* fieldRefl = nullptr;
	$volatile($Array<::java::io::ObjectStreamClass$ClassDataSlot>*) dataLayout = nullptr;
	::java::lang::reflect::Constructor* cons = nullptr;
	::java::lang::invoke::MethodHandle* canonicalCtr = nullptr;
	::java::io::ObjectStreamClass$DeserializationConstructorsCache* deserializationCtrs = nullptr;
	::java::lang::invoke::MethodHandle* deserializationCtr = nullptr;
	$Array<::java::security::ProtectionDomain>* domains = nullptr;
	::java::lang::reflect::Method* writeObjectMethod = nullptr;
	::java::lang::reflect::Method* readObjectMethod = nullptr;
	::java::lang::reflect::Method* readObjectNoDataMethod = nullptr;
	::java::lang::reflect::Method* writeReplaceMethod = nullptr;
	::java::lang::reflect::Method* readResolveMethod = nullptr;
	::java::io::ObjectStreamClass* localDesc = nullptr;
	::java::io::ObjectStreamClass* superDesc = nullptr;
	bool initialized = false;
};

	} // io
} // java

#pragma pop_macro("NO_FIELDS")

#endif // _java_io_ObjectStreamClass_h_