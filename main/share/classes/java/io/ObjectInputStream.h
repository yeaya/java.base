#ifndef _java_io_ObjectInputStream_h_
#define _java_io_ObjectInputStream_h_
//$ class java.io.ObjectInputStream
//$ extends java.io.InputStream
//$ implements java.io.ObjectInput,java.io.ObjectStreamConstants

#include <java/io/InputStream.h>
#include <java/io/ObjectInput.h>
#include <java/io/ObjectStreamConstants.h>
#include <java/lang/Array.h>

#pragma push_macro("NULL_HANDLE")
#undef NULL_HANDLE
#pragma push_macro("UNSAFE")
#undef UNSAFE

namespace java {
	namespace io {
		class Externalizable;
		class IOException;
		class ObjectInputFilter;
		class ObjectInputStream$BlockDataInputStream;
		class ObjectInputStream$GetField;
		class ObjectInputStream$HandleTable;
		class ObjectInputStream$ValidationList;
		class ObjectInputValidation;
		class ObjectStreamClass;
		class SerialCallbackContext;
	}
}
namespace java {
	namespace lang {
		class Boolean;
		class ClassLoader;
		class Enum;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace java {
	namespace io {

class $export ObjectInputStream : public ::java::io::InputStream, public ::java::io::ObjectInput, public ::java::io::ObjectStreamConstants {
	$class(ObjectInputStream, 0, ::java::io::InputStream, ::java::io::ObjectInput, ::java::io::ObjectStreamConstants)
public:
	ObjectInputStream();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::io::InputStream* in);
	void init$();
	static ::java::lang::Boolean* auditSubclass($Class* subcl);
	virtual int32_t available() override;
	void checkArray($Class* arrayType, int32_t arrayLength);
	$Object* checkResolve(Object$* obj);
	void clear();
	static $Object* cloneArray(Object$* array);
	virtual void close() override;
	virtual void defaultReadObject();
	virtual bool enableResolveObject(bool enable);
	void filterCheck($Class* clazz, int32_t arrayLength);
	void freeze();
	::java::io::ObjectInputFilter* getObjectInputFilter();
	void handleReset();
	bool isCustomSubclass();
	static ::java::lang::ClassLoader* latestUserDefinedLoader();
	virtual int32_t read($bytes* b) override;
	virtual int32_t read() override;
	virtual int32_t read($bytes* buf, int32_t off, int32_t len) override;
	$Object* readArray(bool unshared);
	virtual bool readBoolean() override;
	virtual int8_t readByte() override;
	virtual char16_t readChar() override;
	$Class* readClass(bool unshared);
	::java::io::ObjectStreamClass* readClassDesc(bool unshared);
	virtual ::java::io::ObjectStreamClass* readClassDescriptor();
	virtual double readDouble() override;
	::java::lang::Enum* readEnum(bool unshared);
	void readExternalData(::java::io::Externalizable* obj, ::java::io::ObjectStreamClass* desc);
	::java::io::IOException* readFatalException();
	virtual ::java::io::ObjectInputStream$GetField* readFields();
	virtual float readFloat() override;
	virtual void readFully($bytes* buf) override;
	virtual void readFully($bytes* buf, int32_t off, int32_t len) override;
	$Object* readHandle(bool unshared);
	virtual int32_t readInt() override;
	virtual $String* readLine() override;
	virtual int64_t readLong() override;
	::java::io::ObjectStreamClass* readNonProxyDesc(bool unshared);
	$Object* readNull();
	virtual $Object* readObject() override;
	$Object* readObject($Class* type);
	$Object* readObject0($Class* type, bool unshared);
	virtual $Object* readObjectOverride();
	$Object* readOrdinaryObject(bool unshared);
	::java::io::ObjectStreamClass* readProxyDesc(bool unshared);
	$Object* readRecord(::java::io::ObjectStreamClass* desc);
	void readSerialData(Object$* obj, ::java::io::ObjectStreamClass* desc);
	virtual int16_t readShort() override;
	virtual void readStreamHeader();
	$String* readString();
	$String* readString(bool unshared);
	virtual $String* readTypeString();
	virtual $String* readUTF() override;
	virtual $Object* readUnshared();
	virtual int32_t readUnsignedByte() override;
	virtual int32_t readUnsignedShort() override;
	virtual void registerValidation(::java::io::ObjectInputValidation* obj, int32_t prio);
	virtual $Class* resolveClass(::java::io::ObjectStreamClass* desc);
	virtual $Object* resolveObject(Object$* obj);
	virtual $Class* resolveProxyClass($StringArray* interfaces);
	void setObjectInputFilter(::java::io::ObjectInputFilter* filter);
	virtual int64_t skip(int64_t n) override;
	virtual int32_t skipBytes(int32_t len) override;
	void skipCustomData();
	virtual $String* toString() override;
	void verifySubclass();
	static bool $assertionsDisabled;
	static const int32_t NULL_HANDLE = (-1);
	static $Object* unsharedMarker;
	static ::java::util::Map* primClasses;
	::java::io::ObjectInputStream$BlockDataInputStream* bin = nullptr;
	::java::io::ObjectInputStream$ValidationList* vlist = nullptr;
	int64_t depth = 0;
	int64_t totalObjectRefs = 0;
	bool closed = false;
	::java::io::ObjectInputStream$HandleTable* handles = nullptr;
	int32_t passHandle = 0;
	bool defaultDataEnd = false;
	bool enableOverride = false;
	bool enableResolve = false;
	::java::io::SerialCallbackContext* curContext = nullptr;
	::java::io::ObjectInputFilter* serialFilter = nullptr;
	bool streamFilterSet = false;
	static ::jdk::internal::misc::Unsafe* UNSAFE;
};

	} // io
} // java

#pragma pop_macro("NULL_HANDLE")
#pragma pop_macro("UNSAFE")

#endif // _java_io_ObjectInputStream_h_