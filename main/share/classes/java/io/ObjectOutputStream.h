#ifndef _java_io_ObjectOutputStream_h_
#define _java_io_ObjectOutputStream_h_
//$ class java.io.ObjectOutputStream
//$ extends java.io.OutputStream
//$ implements java.io.ObjectOutput,java.io.ObjectStreamConstants

#include <java/io/ObjectOutput.h>
#include <java/io/ObjectStreamConstants.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class Externalizable;
		class IOException;
		class ObjectOutputStream$BlockDataOutputStream;
		class ObjectOutputStream$DebugTraceInfoStack;
		class ObjectOutputStream$HandleTable;
		class ObjectOutputStream$PutField;
		class ObjectOutputStream$PutFieldImpl;
		class ObjectOutputStream$ReplaceTable;
		class ObjectStreamClass;
		class SerialCallbackContext;
	}
}
namespace java {
	namespace lang {
		class Boolean;
		class Enum;
	}
}

namespace java {
	namespace io {

class $export ObjectOutputStream : public ::java::io::OutputStream, public ::java::io::ObjectOutput, public ::java::io::ObjectStreamConstants {
	$class(ObjectOutputStream, 0, ::java::io::OutputStream, ::java::io::ObjectOutput, ::java::io::ObjectStreamConstants)
public:
	ObjectOutputStream();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::io::OutputStream* out);
	void init$();
	virtual void annotateClass($Class* cl);
	virtual void annotateProxyClass($Class* cl);
	static ::java::lang::Boolean* auditSubclass($Class* subcl);
	void clear();
	virtual void close() override;
	void defaultWriteFields(Object$* obj, ::java::io::ObjectStreamClass* desc);
	virtual void defaultWriteObject();
	virtual void drain();
	virtual bool enableReplaceObject(bool enable);
	virtual void flush() override;
	virtual int32_t getProtocolVersion();
	bool isCustomSubclass();
	virtual ::java::io::ObjectOutputStream$PutField* putFields();
	virtual $Object* replaceObject(Object$* obj);
	virtual void reset();
	virtual $String* toString() override;
	virtual void useProtocolVersion(int32_t version);
	void verifySubclass();
	virtual void write(int32_t val) override;
	virtual void write($bytes* buf) override;
	virtual void write($bytes* buf, int32_t off, int32_t len) override;
	void writeArray(Object$* array, ::java::io::ObjectStreamClass* desc, bool unshared);
	virtual void writeBoolean(bool val) override;
	virtual void writeByte(int32_t val) override;
	virtual void writeBytes($String* str) override;
	virtual void writeChar(int32_t val) override;
	virtual void writeChars($String* str) override;
	void writeClass($Class* cl, bool unshared);
	void writeClassDesc(::java::io::ObjectStreamClass* desc, bool unshared);
	virtual void writeClassDescriptor(::java::io::ObjectStreamClass* desc);
	virtual void writeDouble(double val) override;
	void writeEnum(::java::lang::Enum* en, ::java::io::ObjectStreamClass* desc, bool unshared);
	void writeExternalData(::java::io::Externalizable* obj);
	void writeFatalException(::java::io::IOException* ex);
	virtual void writeFields();
	virtual void writeFloat(float val) override;
	void writeHandle(int32_t handle);
	virtual void writeInt(int32_t val) override;
	virtual void writeLong(int64_t val) override;
	void writeNonProxyDesc(::java::io::ObjectStreamClass* desc, bool unshared);
	void writeNull();
	virtual void writeObject(Object$* obj) override;
	void writeObject0(Object$* obj, bool unshared);
	virtual void writeObjectOverride(Object$* obj);
	void writeOrdinaryObject(Object$* obj, ::java::io::ObjectStreamClass* desc, bool unshared);
	void writeProxyDesc(::java::io::ObjectStreamClass* desc, bool unshared);
	void writeRecordData(Object$* obj, ::java::io::ObjectStreamClass* desc);
	void writeSerialData(Object$* obj, ::java::io::ObjectStreamClass* desc);
	virtual void writeShort(int32_t val) override;
	virtual void writeStreamHeader();
	void writeString($String* str, bool unshared);
	virtual void writeTypeString($String* str);
	virtual void writeUTF($String* str) override;
	virtual void writeUnshared(Object$* obj);
	static bool $assertionsDisabled;
	::java::io::ObjectOutputStream$BlockDataOutputStream* bout = nullptr;
	::java::io::ObjectOutputStream$HandleTable* handles = nullptr;
	::java::io::ObjectOutputStream$ReplaceTable* subs = nullptr;
	int32_t protocol = 0;
	int32_t depth = 0;
	$bytes* primVals = nullptr;
	bool enableOverride = false;
	bool enableReplace = false;
	::java::io::SerialCallbackContext* curContext = nullptr;
	::java::io::ObjectOutputStream$PutFieldImpl* curPut = nullptr;
	::java::io::ObjectOutputStream$DebugTraceInfoStack* debugInfoStack = nullptr;
	static bool extendedDebugInfo;
};

	} // io
} // java

#endif // _java_io_ObjectOutputStream_h_