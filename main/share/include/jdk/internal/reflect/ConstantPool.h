#ifndef _jdk_internal_reflect_ConstantPool_h_
#define _jdk_internal_reflect_ConstantPool_h_
//$ class jdk.internal.reflect.ConstantPool
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class DataInputStream;
	}
}
namespace java {
	namespace lang {
		class IntArray;
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class HashMap;
	}
}
namespace jdk {
	namespace internal {
		namespace reflect {
			class ConstantBase;
			class ConstantClass;
			class ConstantDouble;
			class ConstantDynamic;
			class ConstantFieldRef;
			class ConstantFloat;
			class ConstantInt;
			class ConstantInterfaceMethodRef;
			class ConstantInvokeDynamic;
			class ConstantLong;
			class ConstantMethodHandle;
			class ConstantMethodRef;
			class ConstantMethodType;
			class ConstantModule;
			class ConstantNameAndType;
			class ConstantPackage;
			class ConstantString;
			class ConstantUTF8;
		}
	}
}

namespace java {
	namespace lang {
		namespace reflect {
			class Field;
			class Member;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace reflect {
			class ConstantPool$Tag;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace reflect {

class $import ConstantPool : public ::java::lang::Object {
	$class(ConstantPool, $PRELOAD, ::java::lang::Object)
public:
	ConstantPool();
	void init$();
	virtual $Class* getClassAt(int32_t index);
	$Class* getClassAt0(Object$* constantPoolOop, int32_t index);
	virtual $Class* getClassAtIfLoaded(int32_t index);
	$Class* getClassAtIfLoaded0(Object$* constantPoolOop, int32_t index);
	virtual int32_t getClassRefIndexAt(int32_t index);
	int32_t getClassRefIndexAt0(Object$* constantPoolOop, int32_t index);
	virtual double getDoubleAt(int32_t index);
	double getDoubleAt0(Object$* constantPoolOop, int32_t index);
	virtual ::java::lang::reflect::Field* getFieldAt(int32_t index);
	::java::lang::reflect::Field* getFieldAt0(Object$* constantPoolOop, int32_t index);
	virtual ::java::lang::reflect::Field* getFieldAtIfLoaded(int32_t index);
	::java::lang::reflect::Field* getFieldAtIfLoaded0(Object$* constantPoolOop, int32_t index);
	virtual float getFloatAt(int32_t index);
	float getFloatAt0(Object$* constantPoolOop, int32_t index);
	virtual int32_t getIntAt(int32_t index);
	int32_t getIntAt0(Object$* constantPoolOop, int32_t index);
	virtual int64_t getLongAt(int32_t index);
	int64_t getLongAt0(Object$* constantPoolOop, int32_t index);
	virtual $StringArray* getMemberRefInfoAt(int32_t index);
	$StringArray* getMemberRefInfoAt0(Object$* constantPoolOop, int32_t index);
	virtual ::java::lang::reflect::Member* getMethodAt(int32_t index);
	::java::lang::reflect::Member* getMethodAt0(Object$* constantPoolOop, int32_t index);
	virtual ::java::lang::reflect::Member* getMethodAtIfLoaded(int32_t index);
	::java::lang::reflect::Member* getMethodAtIfLoaded0(Object$* constantPoolOop, int32_t index);
	virtual int32_t getNameAndTypeRefIndexAt(int32_t index);
	int32_t getNameAndTypeRefIndexAt0(Object$* constantPoolOop, int32_t index);
	virtual $StringArray* getNameAndTypeRefInfoAt(int32_t index);
	$StringArray* getNameAndTypeRefInfoAt0(Object$* constantPoolOop, int32_t index);
	virtual int32_t getSize();
	int32_t getSize0(Object$* constantPoolOop);
	virtual $String* getStringAt(int32_t index);
	$String* getStringAt0(Object$* constantPoolOop, int32_t index);
	virtual ::jdk::internal::reflect::ConstantPool$Tag* getTagAt(int32_t index);
	int8_t getTagAt0(Object$* constantPoolOop, int32_t index);
	virtual $String* getUTF8At(int32_t index);
	$String* getUTF8At0(Object$* constantPoolOop, int32_t index);
	$Object* constantPoolOop = nullptr;
public:

	void putUTF8(int32_t index, $String* v);
	int32_t putUTF8($String* v);
	$String* getUTF8(int32_t index);
	
	void putInt(int32_t index, int32_t v);
	int32_t putInt(int32_t v);
	int32_t getInt(int32_t index);
	
	void putFloat(int32_t index, float v);
	int32_t putFloat(float v);
	float getFloat(int32_t index);
	
	void putLong(int32_t index, int64_t v);
	int32_t putLong(int64_t v);
	int64_t getLong(int32_t index);
	
	void putDouble(int32_t index, double v);
	int32_t putDouble(double v);
	double getDouble(int32_t index);
	
	void putClass(int32_t index, int32_t utf8Index);
	int32_t putClass(int32_t utf8Index);
	ConstantClass* getClass(int32_t index);

	void putString(int32_t index, int32_t utf8Index);
	int32_t putString(int32_t utf8Index);
	ConstantString* getString(int32_t index);

	void putFieldRef(int32_t index, int32_t classIndex, int32_t nameAndTypeIndex);
	int32_t putFieldRef(int32_t classIndex, int32_t nameAndTypeIndex);
	ConstantFieldRef* getFieldRef(int32_t index);

	void putMethodRef(int32_t index, int32_t classIndex, int32_t nameAndTypeIndex);
	int32_t putMethodRef(int32_t classIndex, int32_t nameAndTypeIndex);
	ConstantMethodRef* getMethodRef(int32_t index);

	void putInterfaceMethodRef(int32_t index, int32_t classIndex, int32_t nameAndTypeIndex);
	int32_t putInterfaceMethodRef(int32_t classIndex, int32_t nameAndTypeIndex);
	ConstantInterfaceMethodRef* getInterfaceMethodRef(int32_t index);

	void putNameAndType(int32_t index, int32_t nameIndex, int32_t descriptorIndex);
	int32_t putNameAndType(int32_t nameIndex, int32_t descriptorIndex);
	ConstantNameAndType* getNameAndType(int32_t index);

	void putMethodHandle(int32_t index, int8_t kind, int32_t referenceIndex);
	int32_t putMethodHandle(int8_t kind, int32_t referenceIndex);
	ConstantMethodHandle* getMethodHandle(int32_t index);

	void putMethodType(int32_t index, int32_t descriptorIndex);
	int32_t putMethodType(int32_t descriptorIndex);
	ConstantMethodType* getMethodType(int32_t index);

	void putDynamic(int32_t index, int32_t bootstrapMethodAttrIndex, int32_t nameAndTypeIndex);
	int32_t putDynamic(int32_t bootstrapMethodAttrIndex, int32_t nameAndTypeIndex);
	ConstantDynamic* getDynamic(int32_t index);

	void putInvokeDynamic(int32_t index, int32_t bootstrapMethodAttrIndex, int32_t nameAndTypeIndex);
	int32_t putInvokeDynamic(int32_t bootstrapMethodAttrIndex, int32_t nameAndTypeIndex);
	ConstantInvokeDynamic* getInvokeDynamic(int32_t index);

	void putModule(int32_t index, int32_t nameIndex);
	int32_t putModule(int32_t nameIndex);
	ConstantModule* getModule(int32_t index);

	void putPackage(int32_t index, int32_t nameIndex);
	int32_t putPackage(int32_t nameIndex);
	ConstantPackage* getPackage(int32_t index);

	int8_t getTag(int32_t index);
	ConstantBase* getBase(int32_t index);
	ConstantBase* getPos($String* key);
	void putPos($String* key, ConstantBase* value);

	::java::util::ArrayList* values = nullptr;
	::java::util::HashMap* keysToPos = nullptr;
	
	static ConstantPool* decode(::java::io::DataInputStream* is);
	void init();
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_ConstantPool_h_