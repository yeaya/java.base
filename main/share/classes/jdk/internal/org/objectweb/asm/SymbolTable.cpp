#include <jdk/internal/org/objectweb/asm/SymbolTable.h>

#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Byte.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/ByteVector.h>
#include <jdk/internal/org/objectweb/asm/ClassReader.h>
#include <jdk/internal/org/objectweb/asm/ClassWriter.h>
#include <jdk/internal/org/objectweb/asm/ConstantDynamic.h>
#include <jdk/internal/org/objectweb/asm/Constants.h>
#include <jdk/internal/org/objectweb/asm/Handle.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/Symbol.h>
#include <jdk/internal/org/objectweb/asm/SymbolTable$Entry.h>
#include <jdk/internal/org/objectweb/asm/Type.h>
#include <jcpp.h>

#undef BOOTSTRAP_METHODS
#undef BOOTSTRAP_METHOD_TAG
#undef CONSTANT_CLASS_TAG
#undef CONSTANT_DOUBLE_TAG
#undef CONSTANT_DYNAMIC_TAG
#undef CONSTANT_FIELDREF_TAG
#undef CONSTANT_FLOAT_TAG
#undef CONSTANT_INTEGER_TAG
#undef CONSTANT_INTERFACE_METHODREF_TAG
#undef CONSTANT_INVOKE_DYNAMIC_TAG
#undef CONSTANT_LONG_TAG
#undef CONSTANT_METHODREF_TAG
#undef CONSTANT_METHOD_HANDLE_TAG
#undef CONSTANT_METHOD_TYPE_TAG
#undef CONSTANT_MODULE_TAG
#undef CONSTANT_NAME_AND_TYPE_TAG
#undef CONSTANT_PACKAGE_TAG
#undef CONSTANT_STRING_TAG
#undef CONSTANT_UTF8_TAG
#undef H_PUTSTATIC
#undef MERGED_TYPE_TAG
#undef METHOD
#undef OBJECT
#undef TYPE_TAG
#undef UNINITIALIZED_TYPE_TAG

using $SymbolTable$EntryArray = $Array<::jdk::internal::org::objectweb::asm$::SymbolTable$Entry>;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $ByteVector = ::jdk::internal::org::objectweb::asm$::ByteVector;
using $ClassReader = ::jdk::internal::org::objectweb::asm$::ClassReader;
using $ClassWriter = ::jdk::internal::org::objectweb::asm$::ClassWriter;
using $ConstantDynamic = ::jdk::internal::org::objectweb::asm$::ConstantDynamic;
using $Constants = ::jdk::internal::org::objectweb::asm$::Constants;
using $Handle = ::jdk::internal::org::objectweb::asm$::Handle;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $Symbol = ::jdk::internal::org::objectweb::asm$::Symbol;
using $SymbolTable$Entry = ::jdk::internal::org::objectweb::asm$::SymbolTable$Entry;
using $Type = ::jdk::internal::org::objectweb::asm$::Type;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _SymbolTable_FieldInfo_[] = {
	{"classWriter", "Ljdk/internal/org/objectweb/asm/ClassWriter;", nullptr, $FINAL, $field(SymbolTable, classWriter)},
	{"sourceClassReader", "Ljdk/internal/org/objectweb/asm/ClassReader;", nullptr, $PRIVATE | $FINAL, $field(SymbolTable, sourceClassReader)},
	{"majorVersion", "I", nullptr, $PRIVATE, $field(SymbolTable, majorVersion)},
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SymbolTable, className)},
	{"entryCount", "I", nullptr, $PRIVATE, $field(SymbolTable, entryCount)},
	{"entries", "[Ljdk/internal/org/objectweb/asm/SymbolTable$Entry;", nullptr, $PRIVATE, $field(SymbolTable, entries)},
	{"constantPoolCount", "I", nullptr, $PRIVATE, $field(SymbolTable, constantPoolCount)},
	{"constantPool", "Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PRIVATE, $field(SymbolTable, constantPool)},
	{"bootstrapMethodCount", "I", nullptr, $PRIVATE, $field(SymbolTable, bootstrapMethodCount)},
	{"bootstrapMethods", "Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PRIVATE, $field(SymbolTable, bootstrapMethods)},
	{"typeCount", "I", nullptr, $PRIVATE, $field(SymbolTable, typeCount)},
	{"typeTable", "[Ljdk/internal/org/objectweb/asm/SymbolTable$Entry;", nullptr, $PRIVATE, $field(SymbolTable, typeTable)},
	{}
};

$MethodInfo _SymbolTable_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/ClassWriter;)V", nullptr, 0, $method(static_cast<void(SymbolTable::*)($ClassWriter*)>(&SymbolTable::init$))},
	{"<init>", "(Ljdk/internal/org/objectweb/asm/ClassWriter;Ljdk/internal/org/objectweb/asm/ClassReader;)V", nullptr, 0, $method(static_cast<void(SymbolTable::*)($ClassWriter*,$ClassReader*)>(&SymbolTable::init$))},
	{"add", "(Ljdk/internal/org/objectweb/asm/SymbolTable$Entry;)V", nullptr, $PRIVATE, $method(static_cast<void(SymbolTable::*)($SymbolTable$Entry*)>(&SymbolTable::add))},
	{"addBootstrapMethod", "(Ljdk/internal/org/objectweb/asm/Handle;[Ljava/lang/Object;)Ljdk/internal/org/objectweb/asm/Symbol;", nullptr, $TRANSIENT, $method(static_cast<$Symbol*(SymbolTable::*)($Handle*,$ObjectArray*)>(&SymbolTable::addBootstrapMethod))},
	{"addBootstrapMethod", "(III)Ljdk/internal/org/objectweb/asm/Symbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol*(SymbolTable::*)(int32_t,int32_t,int32_t)>(&SymbolTable::addBootstrapMethod))},
	{"addConstant", "(Ljava/lang/Object;)Ljdk/internal/org/objectweb/asm/Symbol;", nullptr, 0, $method(static_cast<$Symbol*(SymbolTable::*)(Object$*)>(&SymbolTable::addConstant))},
	{"addConstantClass", "(Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/Symbol;", nullptr, 0, $method(static_cast<$Symbol*(SymbolTable::*)($String*)>(&SymbolTable::addConstantClass))},
	{"addConstantDouble", "(D)Ljdk/internal/org/objectweb/asm/Symbol;", nullptr, 0, $method(static_cast<$Symbol*(SymbolTable::*)(double)>(&SymbolTable::addConstantDouble))},
	{"addConstantDynamic", "(Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/Handle;[Ljava/lang/Object;)Ljdk/internal/org/objectweb/asm/Symbol;", nullptr, $TRANSIENT, $method(static_cast<$Symbol*(SymbolTable::*)($String*,$String*,$Handle*,$ObjectArray*)>(&SymbolTable::addConstantDynamic))},
	{"addConstantDynamicOrInvokeDynamicReference", "(ILjava/lang/String;Ljava/lang/String;I)Ljdk/internal/org/objectweb/asm/Symbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol*(SymbolTable::*)(int32_t,$String*,$String*,int32_t)>(&SymbolTable::addConstantDynamicOrInvokeDynamicReference))},
	{"addConstantDynamicOrInvokeDynamicReference", "(IILjava/lang/String;Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(SymbolTable::*)(int32_t,int32_t,$String*,$String*,int32_t)>(&SymbolTable::addConstantDynamicOrInvokeDynamicReference))},
	{"addConstantFieldref", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/Symbol;", nullptr, 0, $method(static_cast<$Symbol*(SymbolTable::*)($String*,$String*,$String*)>(&SymbolTable::addConstantFieldref))},
	{"addConstantFloat", "(F)Ljdk/internal/org/objectweb/asm/Symbol;", nullptr, 0, $method(static_cast<$Symbol*(SymbolTable::*)(float)>(&SymbolTable::addConstantFloat))},
	{"addConstantInteger", "(I)Ljdk/internal/org/objectweb/asm/Symbol;", nullptr, 0, $method(static_cast<$Symbol*(SymbolTable::*)(int32_t)>(&SymbolTable::addConstantInteger))},
	{"addConstantIntegerOrFloat", "(II)Ljdk/internal/org/objectweb/asm/Symbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol*(SymbolTable::*)(int32_t,int32_t)>(&SymbolTable::addConstantIntegerOrFloat))},
	{"addConstantIntegerOrFloat", "(III)V", nullptr, $PRIVATE, $method(static_cast<void(SymbolTable::*)(int32_t,int32_t,int32_t)>(&SymbolTable::addConstantIntegerOrFloat))},
	{"addConstantInvokeDynamic", "(Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/Handle;[Ljava/lang/Object;)Ljdk/internal/org/objectweb/asm/Symbol;", nullptr, $TRANSIENT, $method(static_cast<$Symbol*(SymbolTable::*)($String*,$String*,$Handle*,$ObjectArray*)>(&SymbolTable::addConstantInvokeDynamic))},
	{"addConstantLong", "(J)Ljdk/internal/org/objectweb/asm/Symbol;", nullptr, 0, $method(static_cast<$Symbol*(SymbolTable::*)(int64_t)>(&SymbolTable::addConstantLong))},
	{"addConstantLongOrDouble", "(IJ)Ljdk/internal/org/objectweb/asm/Symbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol*(SymbolTable::*)(int32_t,int64_t)>(&SymbolTable::addConstantLongOrDouble))},
	{"addConstantLongOrDouble", "(IIJ)V", nullptr, $PRIVATE, $method(static_cast<void(SymbolTable::*)(int32_t,int32_t,int64_t)>(&SymbolTable::addConstantLongOrDouble))},
	{"addConstantMemberReference", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/SymbolTable$Entry;", nullptr, $PRIVATE, $method(static_cast<$SymbolTable$Entry*(SymbolTable::*)(int32_t,$String*,$String*,$String*)>(&SymbolTable::addConstantMemberReference))},
	{"addConstantMemberReference", "(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(SymbolTable::*)(int32_t,int32_t,$String*,$String*,$String*)>(&SymbolTable::addConstantMemberReference))},
	{"addConstantMethodHandle", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/Symbol;", nullptr, 0, $method(static_cast<$Symbol*(SymbolTable::*)(int32_t,$String*,$String*,$String*,bool)>(&SymbolTable::addConstantMethodHandle))},
	{"addConstantMethodHandle", "(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(SymbolTable::*)(int32_t,int32_t,$String*,$String*,$String*)>(&SymbolTable::addConstantMethodHandle))},
	{"addConstantMethodType", "(Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/Symbol;", nullptr, 0, $method(static_cast<$Symbol*(SymbolTable::*)($String*)>(&SymbolTable::addConstantMethodType))},
	{"addConstantMethodref", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/Symbol;", nullptr, 0, $method(static_cast<$Symbol*(SymbolTable::*)($String*,$String*,$String*,bool)>(&SymbolTable::addConstantMethodref))},
	{"addConstantModule", "(Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/Symbol;", nullptr, 0, $method(static_cast<$Symbol*(SymbolTable::*)($String*)>(&SymbolTable::addConstantModule))},
	{"addConstantNameAndType", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, 0, $method(static_cast<int32_t(SymbolTable::*)($String*,$String*)>(&SymbolTable::addConstantNameAndType))},
	{"addConstantNameAndType", "(ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(SymbolTable::*)(int32_t,$String*,$String*)>(&SymbolTable::addConstantNameAndType))},
	{"addConstantPackage", "(Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/Symbol;", nullptr, 0, $method(static_cast<$Symbol*(SymbolTable::*)($String*)>(&SymbolTable::addConstantPackage))},
	{"addConstantString", "(Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/Symbol;", nullptr, 0, $method(static_cast<$Symbol*(SymbolTable::*)($String*)>(&SymbolTable::addConstantString))},
	{"addConstantUtf8", "(Ljava/lang/String;)I", nullptr, 0, $method(static_cast<int32_t(SymbolTable::*)($String*)>(&SymbolTable::addConstantUtf8))},
	{"addConstantUtf8", "(ILjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(SymbolTable::*)(int32_t,$String*)>(&SymbolTable::addConstantUtf8))},
	{"addConstantUtf8Reference", "(ILjava/lang/String;)Ljdk/internal/org/objectweb/asm/Symbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol*(SymbolTable::*)(int32_t,$String*)>(&SymbolTable::addConstantUtf8Reference))},
	{"addConstantUtf8Reference", "(IILjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(SymbolTable::*)(int32_t,int32_t,$String*)>(&SymbolTable::addConstantUtf8Reference))},
	{"addMergedType", "(II)I", nullptr, 0, $method(static_cast<int32_t(SymbolTable::*)(int32_t,int32_t)>(&SymbolTable::addMergedType))},
	{"addType", "(Ljava/lang/String;)I", nullptr, 0, $method(static_cast<int32_t(SymbolTable::*)($String*)>(&SymbolTable::addType))},
	{"addTypeInternal", "(Ljdk/internal/org/objectweb/asm/SymbolTable$Entry;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SymbolTable::*)($SymbolTable$Entry*)>(&SymbolTable::addTypeInternal))},
	{"addUninitializedType", "(Ljava/lang/String;I)I", nullptr, 0, $method(static_cast<int32_t(SymbolTable::*)($String*,int32_t)>(&SymbolTable::addUninitializedType))},
	{"computeBootstrapMethodsSize", "()I", nullptr, 0, $method(static_cast<int32_t(SymbolTable::*)()>(&SymbolTable::computeBootstrapMethodsSize))},
	{"copyBootstrapMethods", "(Ljdk/internal/org/objectweb/asm/ClassReader;[C)V", nullptr, $PRIVATE, $method(static_cast<void(SymbolTable::*)($ClassReader*,$chars*)>(&SymbolTable::copyBootstrapMethods))},
	{"get", "(I)Ljdk/internal/org/objectweb/asm/SymbolTable$Entry;", nullptr, $PRIVATE, $method(static_cast<$SymbolTable$Entry*(SymbolTable::*)(int32_t)>(&SymbolTable::get))},
	{"getClassName", "()Ljava/lang/String;", nullptr, 0, $method(static_cast<$String*(SymbolTable::*)()>(&SymbolTable::getClassName))},
	{"getConstantPoolCount", "()I", nullptr, 0, $method(static_cast<int32_t(SymbolTable::*)()>(&SymbolTable::getConstantPoolCount))},
	{"getConstantPoolLength", "()I", nullptr, 0, $method(static_cast<int32_t(SymbolTable::*)()>(&SymbolTable::getConstantPoolLength))},
	{"getMajorVersion", "()I", nullptr, 0, $method(static_cast<int32_t(SymbolTable::*)()>(&SymbolTable::getMajorVersion))},
	{"getSource", "()Ljdk/internal/org/objectweb/asm/ClassReader;", nullptr, 0, $method(static_cast<$ClassReader*(SymbolTable::*)()>(&SymbolTable::getSource))},
	{"getType", "(I)Ljdk/internal/org/objectweb/asm/Symbol;", nullptr, 0, $method(static_cast<$Symbol*(SymbolTable::*)(int32_t)>(&SymbolTable::getType))},
	{"hash", "(II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&SymbolTable::hash))},
	{"hash", "(IJ)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int64_t)>(&SymbolTable::hash))},
	{"hash", "(ILjava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,$String*)>(&SymbolTable::hash))},
	{"hash", "(ILjava/lang/String;I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,$String*,int32_t)>(&SymbolTable::hash))},
	{"hash", "(ILjava/lang/String;Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,$String*,$String*)>(&SymbolTable::hash))},
	{"hash", "(ILjava/lang/String;Ljava/lang/String;I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,$String*,$String*,int32_t)>(&SymbolTable::hash))},
	{"hash", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,$String*,$String*,$String*)>(&SymbolTable::hash))},
	{"hash", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,$String*,$String*,$String*,int32_t)>(&SymbolTable::hash))},
	{"put", "(Ljdk/internal/org/objectweb/asm/SymbolTable$Entry;)Ljdk/internal/org/objectweb/asm/SymbolTable$Entry;", nullptr, $PRIVATE, $method(static_cast<$SymbolTable$Entry*(SymbolTable::*)($SymbolTable$Entry*)>(&SymbolTable::put))},
	{"putBootstrapMethods", "(Ljdk/internal/org/objectweb/asm/ByteVector;)V", nullptr, 0, $method(static_cast<void(SymbolTable::*)($ByteVector*)>(&SymbolTable::putBootstrapMethods))},
	{"putConstantPool", "(Ljdk/internal/org/objectweb/asm/ByteVector;)V", nullptr, 0, $method(static_cast<void(SymbolTable::*)($ByteVector*)>(&SymbolTable::putConstantPool))},
	{"setMajorVersionAndClassName", "(ILjava/lang/String;)I", nullptr, 0, $method(static_cast<int32_t(SymbolTable::*)(int32_t,$String*)>(&SymbolTable::setMajorVersionAndClassName))},
	{}
};

$InnerClassInfo _SymbolTable_InnerClassesInfo_[] = {
	{"jdk.internal.org.objectweb.asm.SymbolTable$Entry", "jdk.internal.org.objectweb.asm.SymbolTable", "Entry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SymbolTable_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.SymbolTable",
	"java.lang.Object",
	nullptr,
	_SymbolTable_FieldInfo_,
	_SymbolTable_MethodInfo_,
	nullptr,
	nullptr,
	_SymbolTable_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.org.objectweb.asm.SymbolTable$Entry"
};

$Object* allocate$SymbolTable($Class* clazz) {
	return $of($alloc(SymbolTable));
}

void SymbolTable::init$($ClassWriter* classWriter) {
	$set(this, classWriter, classWriter);
	$set(this, sourceClassReader, nullptr);
	$set(this, entries, $new($SymbolTable$EntryArray, 256));
	this->constantPoolCount = 1;
	$set(this, constantPool, $new($ByteVector));
}

void SymbolTable::init$($ClassWriter* classWriter, $ClassReader* classReader) {
	$useLocalCurrentObjectStackCache();
	$set(this, classWriter, classWriter);
	$set(this, sourceClassReader, classReader);
	$var($bytes, inputBytes, $nc(classReader)->classFileBuffer);
	int32_t constantPoolOffset = classReader->getItem(1) - 1;
	int32_t constantPoolLength = classReader->header - constantPoolOffset;
	this->constantPoolCount = classReader->getItemCount();
	$set(this, constantPool, $new($ByteVector, constantPoolLength));
	$nc(this->constantPool)->putByteArray(inputBytes, constantPoolOffset, constantPoolLength);
	$set(this, entries, $new($SymbolTable$EntryArray, this->constantPoolCount * 2));
	$var($chars, charBuffer, $new($chars, classReader->getMaxStringLength()));
	bool hasBootstrapMethods = false;
	int32_t itemIndex = 1;
	while (itemIndex < this->constantPoolCount) {
		int32_t itemOffset = classReader->getItem(itemIndex);
		int32_t itemTag = $nc(inputBytes)->get(itemOffset - 1);
		int32_t nameAndTypeItemOffset = 0;
		{
			int32_t memberRefItemOffset = 0;
			switch (itemTag) {
			case $Symbol::CONSTANT_FIELDREF_TAG:
				{}
			case $Symbol::CONSTANT_METHODREF_TAG:
				{}
			case $Symbol::CONSTANT_INTERFACE_METHODREF_TAG:
				{
					nameAndTypeItemOffset = classReader->getItem(classReader->readUnsignedShort(itemOffset + 2));
					int32_t var$0 = itemIndex;
					int32_t var$1 = itemTag;
					$var($String, var$2, classReader->readClass(itemOffset, charBuffer));
					$var($String, var$3, classReader->readUTF8(nameAndTypeItemOffset, charBuffer));
					addConstantMemberReference(var$0, var$1, var$2, var$3, $(classReader->readUTF8(nameAndTypeItemOffset + 2, charBuffer)));
					break;
				}
			case $Symbol::CONSTANT_INTEGER_TAG:
				{}
			case $Symbol::CONSTANT_FLOAT_TAG:
				{
					addConstantIntegerOrFloat(itemIndex, itemTag, classReader->readInt(itemOffset));
					break;
				}
			case $Symbol::CONSTANT_NAME_AND_TYPE_TAG:
				{
					int32_t var$4 = itemIndex;
					$var($String, var$5, classReader->readUTF8(itemOffset, charBuffer));
					addConstantNameAndType(var$4, var$5, $(classReader->readUTF8(itemOffset + 2, charBuffer)));
					break;
				}
			case $Symbol::CONSTANT_LONG_TAG:
				{}
			case $Symbol::CONSTANT_DOUBLE_TAG:
				{
					addConstantLongOrDouble(itemIndex, itemTag, classReader->readLong(itemOffset));
					break;
				}
			case $Symbol::CONSTANT_UTF8_TAG:
				{
					addConstantUtf8(itemIndex, $(classReader->readUtf(itemIndex, charBuffer)));
					break;
				}
			case $Symbol::CONSTANT_METHOD_HANDLE_TAG:
				{
					memberRefItemOffset = classReader->getItem(classReader->readUnsignedShort(itemOffset + 1));
					nameAndTypeItemOffset = classReader->getItem(classReader->readUnsignedShort(memberRefItemOffset + 2));
					int32_t var$6 = itemIndex;
					int32_t var$7 = classReader->readByte(itemOffset);
					$var($String, var$8, classReader->readClass(memberRefItemOffset, charBuffer));
					$var($String, var$9, classReader->readUTF8(nameAndTypeItemOffset, charBuffer));
					addConstantMethodHandle(var$6, var$7, var$8, var$9, $(classReader->readUTF8(nameAndTypeItemOffset + 2, charBuffer)));
					break;
				}
			case $Symbol::CONSTANT_DYNAMIC_TAG:
				{}
			case $Symbol::CONSTANT_INVOKE_DYNAMIC_TAG:
				{
					hasBootstrapMethods = true;
					nameAndTypeItemOffset = classReader->getItem(classReader->readUnsignedShort(itemOffset + 2));
					int32_t var$10 = itemTag;
					int32_t var$11 = itemIndex;
					$var($String, var$12, classReader->readUTF8(nameAndTypeItemOffset, charBuffer));
					$var($String, var$13, classReader->readUTF8(nameAndTypeItemOffset + 2, charBuffer));
					addConstantDynamicOrInvokeDynamicReference(var$10, var$11, var$12, var$13, classReader->readUnsignedShort(itemOffset));
					break;
				}
			case $Symbol::CONSTANT_STRING_TAG:
				{}
			case $Symbol::CONSTANT_CLASS_TAG:
				{}
			case $Symbol::CONSTANT_METHOD_TYPE_TAG:
				{}
			case $Symbol::CONSTANT_MODULE_TAG:
				{}
			case $Symbol::CONSTANT_PACKAGE_TAG:
				{
					addConstantUtf8Reference(itemIndex, itemTag, $(classReader->readUTF8(itemOffset, charBuffer)));
					break;
				}
			default:
				{
					$throwNew($IllegalArgumentException);
				}
			}
		}
		itemIndex += (itemTag == $Symbol::CONSTANT_LONG_TAG || itemTag == $Symbol::CONSTANT_DOUBLE_TAG) ? 2 : 1;
	}
	if (hasBootstrapMethods) {
		copyBootstrapMethods(classReader, charBuffer);
	}
}

void SymbolTable::copyBootstrapMethods($ClassReader* classReader, $chars* charBuffer) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, inputBytes, $nc(classReader)->classFileBuffer);
	int32_t currentAttributeOffset = classReader->getFirstAttributeOffset();
	for (int32_t i = classReader->readUnsignedShort(currentAttributeOffset - 2); i > 0; --i) {
		$var($String, attributeName, classReader->readUTF8(currentAttributeOffset, charBuffer));
		$init($Constants);
		if ($nc($Constants::BOOTSTRAP_METHODS)->equals(attributeName)) {
			this->bootstrapMethodCount = classReader->readUnsignedShort(currentAttributeOffset + 6);
			break;
		}
		currentAttributeOffset += 6 + classReader->readInt(currentAttributeOffset + 2);
	}
	if (this->bootstrapMethodCount > 0) {
		int32_t bootstrapMethodsOffset = currentAttributeOffset + 8;
		int32_t bootstrapMethodsLength = classReader->readInt(currentAttributeOffset + 2) - 2;
		$set(this, bootstrapMethods, $new($ByteVector, bootstrapMethodsLength));
		$nc(this->bootstrapMethods)->putByteArray(inputBytes, bootstrapMethodsOffset, bootstrapMethodsLength);
		int32_t currentOffset = bootstrapMethodsOffset;
		for (int32_t i = 0; i < this->bootstrapMethodCount; ++i) {
			int32_t offset = currentOffset - bootstrapMethodsOffset;
			int32_t bootstrapMethodRef = classReader->readUnsignedShort(currentOffset);
			currentOffset += 2;
			int32_t numBootstrapArguments = classReader->readUnsignedShort(currentOffset);
			currentOffset += 2;
			int32_t hashCode = $nc($of($(classReader->readConst(bootstrapMethodRef, charBuffer))))->hashCode();
			while (numBootstrapArguments-- > 0) {
				int32_t bootstrapArgument = classReader->readUnsignedShort(currentOffset);
				currentOffset += 2;
				hashCode ^= $nc($of($(classReader->readConst(bootstrapArgument, charBuffer))))->hashCode();
			}
			add($$new($SymbolTable$Entry, i, $Symbol::BOOTSTRAP_METHOD_TAG, (int64_t)offset, (int32_t)(hashCode & (uint32_t)0x7FFFFFFF)));
		}
	}
}

$ClassReader* SymbolTable::getSource() {
	return this->sourceClassReader;
}

int32_t SymbolTable::getMajorVersion() {
	return this->majorVersion;
}

$String* SymbolTable::getClassName() {
	return this->className;
}

int32_t SymbolTable::setMajorVersionAndClassName(int32_t majorVersion, $String* className) {
	this->majorVersion = majorVersion;
	$set(this, className, className);
	return $nc($(addConstantClass(className)))->index;
}

int32_t SymbolTable::getConstantPoolCount() {
	return this->constantPoolCount;
}

int32_t SymbolTable::getConstantPoolLength() {
	return $nc(this->constantPool)->length;
}

void SymbolTable::putConstantPool($ByteVector* output) {
	$nc($($nc(output)->putShort(this->constantPoolCount)))->putByteArray($nc(this->constantPool)->data, 0, $nc(this->constantPool)->length);
}

int32_t SymbolTable::computeBootstrapMethodsSize() {
	if (this->bootstrapMethods != nullptr) {
		$init($Constants);
		addConstantUtf8($Constants::BOOTSTRAP_METHODS);
		return 8 + $nc(this->bootstrapMethods)->length;
	} else {
		return 0;
	}
}

void SymbolTable::putBootstrapMethods($ByteVector* output) {
	$useLocalCurrentObjectStackCache();
	if (this->bootstrapMethods != nullptr) {
		$init($Constants);
		$nc($($nc($($nc($($nc(output)->putShort(addConstantUtf8($Constants::BOOTSTRAP_METHODS))))->putInt($nc(this->bootstrapMethods)->length + 2)))->putShort(this->bootstrapMethodCount)))->putByteArray($nc(this->bootstrapMethods)->data, 0, $nc(this->bootstrapMethods)->length);
	}
}

$SymbolTable$Entry* SymbolTable::get(int32_t hashCode) {
	return $nc(this->entries)->get($mod(hashCode, $nc(this->entries)->length));
}

$SymbolTable$Entry* SymbolTable::put($SymbolTable$Entry* entry) {
	$useLocalCurrentObjectStackCache();
	if (this->entryCount > ($nc(this->entries)->length * 3) / 4) {
		int32_t currentCapacity = $nc(this->entries)->length;
		int32_t newCapacity = currentCapacity * 2 + 1;
		$var($SymbolTable$EntryArray, newEntries, $new($SymbolTable$EntryArray, newCapacity));
		for (int32_t i = currentCapacity - 1; i >= 0; --i) {
			$var($SymbolTable$Entry, currentEntry, $nc(this->entries)->get(i));
			while (currentEntry != nullptr) {
				int32_t newCurrentEntryIndex = $mod(currentEntry->hashCode$, newCapacity);
				$var($SymbolTable$Entry, nextEntry, currentEntry->next);
				$set(currentEntry, next, newEntries->get(newCurrentEntryIndex));
				newEntries->set(newCurrentEntryIndex, currentEntry);
				$assign(currentEntry, nextEntry);
			}
		}
		$set(this, entries, newEntries);
	}
	++this->entryCount;
	int32_t index = $mod($nc(entry)->hashCode$, $nc(this->entries)->length);
	$set(entry, next, $nc(this->entries)->get(index));
	return $nc(this->entries)->set(index, entry);
}

void SymbolTable::add($SymbolTable$Entry* entry) {
	++this->entryCount;
	int32_t index = $mod($nc(entry)->hashCode$, $nc(this->entries)->length);
	$set(entry, next, $nc(this->entries)->get(index));
	$nc(this->entries)->set(index, entry);
}

$Symbol* SymbolTable::addConstant(Object$* value) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Integer, value)) {
		return addConstantInteger($nc(($cast($Integer, value)))->intValue());
	} else if ($instanceOf($Byte, value)) {
		return addConstantInteger($nc(($cast($Byte, value)))->intValue());
	} else if ($instanceOf($Character, value)) {
		return addConstantInteger($nc(($cast($Character, value)))->charValue());
	} else if ($instanceOf($Short, value)) {
		return addConstantInteger($nc(($cast($Short, value)))->intValue());
	} else if ($instanceOf($Boolean, value)) {
		return addConstantInteger($nc(($cast($Boolean, value)))->booleanValue() ? 1 : 0);
	} else if ($instanceOf($Float, value)) {
		return addConstantFloat($nc(($cast($Float, value)))->floatValue());
	} else if ($instanceOf($Long, value)) {
		return addConstantLong($nc(($cast($Long, value)))->longValue());
	} else if ($instanceOf($Double, value)) {
		return addConstantDouble($nc(($cast($Double, value)))->doubleValue());
	} else if ($instanceOf($String, value)) {
		return addConstantString($cast($String, value));
	} else if ($instanceOf($Type, value)) {
		$var($Type, type, $cast($Type, value));
		int32_t typeSort = $nc(type)->getSort();
		if (typeSort == $Type::OBJECT) {
			return addConstantClass($(type->getInternalName()));
		} else if (typeSort == $Type::METHOD) {
			return addConstantMethodType($(type->getDescriptor()));
		} else {
			return addConstantClass($(type->getDescriptor()));
		}
	} else if ($instanceOf($Handle, value)) {
		$var($Handle, handle, $cast($Handle, value));
		int32_t var$0 = $nc(handle)->getTag();
		$var($String, var$1, handle->getOwner());
		$var($String, var$2, handle->getName());
		$var($String, var$3, handle->getDesc());
		return addConstantMethodHandle(var$0, var$1, var$2, var$3, handle->isInterface());
	} else if ($instanceOf($ConstantDynamic, value)) {
		$var($ConstantDynamic, constantDynamic, $cast($ConstantDynamic, value));
		$var($String, var$4, $nc(constantDynamic)->getName());
		$var($String, var$5, constantDynamic->getDescriptor());
		$var($Handle, var$6, constantDynamic->getBootstrapMethod());
		return addConstantDynamic(var$4, var$5, var$6, $(constantDynamic->getBootstrapMethodArgumentsUnsafe()));
	} else {
		$throwNew($IllegalArgumentException, $$str({"value "_s, value}));
	}
}

$Symbol* SymbolTable::addConstantClass($String* value) {
	return addConstantUtf8Reference($Symbol::CONSTANT_CLASS_TAG, value);
}

$Symbol* SymbolTable::addConstantFieldref($String* owner, $String* name, $String* descriptor) {
	return addConstantMemberReference($Symbol::CONSTANT_FIELDREF_TAG, owner, name, descriptor);
}

$Symbol* SymbolTable::addConstantMethodref($String* owner, $String* name, $String* descriptor, bool isInterface) {
	int32_t tag = isInterface ? $Symbol::CONSTANT_INTERFACE_METHODREF_TAG : $Symbol::CONSTANT_METHODREF_TAG;
	return addConstantMemberReference(tag, owner, name, descriptor);
}

$SymbolTable$Entry* SymbolTable::addConstantMemberReference(int32_t tag, $String* owner, $String* name, $String* descriptor) {
	$useLocalCurrentObjectStackCache();
	int32_t hashCode = hash(tag, owner, name, descriptor);
	$var($SymbolTable$Entry, entry, get(hashCode));
	while (entry != nullptr) {
		bool var$1 = entry->tag == tag && entry->hashCode$ == hashCode && $nc(entry->owner)->equals(owner);
		bool var$0 = var$1 && $nc(entry->name)->equals(name);
		if (var$0 && $nc(entry->value)->equals(descriptor)) {
			return entry;
		}
		$assign(entry, entry->next);
	}
	int32_t var$2 = tag;
	int32_t var$3 = $nc($(addConstantClass(owner)))->index;
	$nc(this->constantPool)->put122(var$2, var$3, addConstantNameAndType(name, descriptor));
	return put($$new($SymbolTable$Entry, this->constantPoolCount++, tag, owner, name, descriptor, 0, hashCode));
}

void SymbolTable::addConstantMemberReference(int32_t index, int32_t tag, $String* owner, $String* name, $String* descriptor) {
	add($$new($SymbolTable$Entry, index, tag, owner, name, descriptor, 0, hash(tag, owner, name, descriptor)));
}

$Symbol* SymbolTable::addConstantString($String* value) {
	return addConstantUtf8Reference($Symbol::CONSTANT_STRING_TAG, value);
}

$Symbol* SymbolTable::addConstantInteger(int32_t value) {
	return addConstantIntegerOrFloat($Symbol::CONSTANT_INTEGER_TAG, value);
}

$Symbol* SymbolTable::addConstantFloat(float value) {
	return addConstantIntegerOrFloat($Symbol::CONSTANT_FLOAT_TAG, $Float::floatToRawIntBits(value));
}

$Symbol* SymbolTable::addConstantIntegerOrFloat(int32_t tag, int32_t value) {
	$useLocalCurrentObjectStackCache();
	int32_t hashCode = hash(tag, value);
	$var($SymbolTable$Entry, entry, get(hashCode));
	while (entry != nullptr) {
		if (entry->tag == tag && entry->hashCode$ == hashCode && entry->data == value) {
			return entry;
		}
		$assign(entry, entry->next);
	}
	$nc($($nc(this->constantPool)->putByte(tag)))->putInt(value);
	return put($$new($SymbolTable$Entry, this->constantPoolCount++, tag, (int64_t)value, hashCode));
}

void SymbolTable::addConstantIntegerOrFloat(int32_t index, int32_t tag, int32_t value) {
	add($$new($SymbolTable$Entry, index, tag, (int64_t)value, hash(tag, value)));
}

$Symbol* SymbolTable::addConstantLong(int64_t value) {
	return addConstantLongOrDouble($Symbol::CONSTANT_LONG_TAG, value);
}

$Symbol* SymbolTable::addConstantDouble(double value) {
	return addConstantLongOrDouble($Symbol::CONSTANT_DOUBLE_TAG, $Double::doubleToRawLongBits(value));
}

$Symbol* SymbolTable::addConstantLongOrDouble(int32_t tag, int64_t value) {
	$useLocalCurrentObjectStackCache();
	int32_t hashCode = hash(tag, value);
	$var($SymbolTable$Entry, entry, get(hashCode));
	while (entry != nullptr) {
		if (entry->tag == tag && entry->hashCode$ == hashCode && entry->data == value) {
			return entry;
		}
		$assign(entry, entry->next);
	}
	int32_t index = this->constantPoolCount;
	$nc($($nc(this->constantPool)->putByte(tag)))->putLong(value);
	this->constantPoolCount += 2;
	return put($$new($SymbolTable$Entry, index, tag, value, hashCode));
}

void SymbolTable::addConstantLongOrDouble(int32_t index, int32_t tag, int64_t value) {
	add($$new($SymbolTable$Entry, index, tag, value, hash(tag, value)));
}

int32_t SymbolTable::addConstantNameAndType($String* name, $String* descriptor) {
	$useLocalCurrentObjectStackCache();
	int32_t tag = $Symbol::CONSTANT_NAME_AND_TYPE_TAG;
	int32_t hashCode = hash(tag, name, descriptor);
	$var($SymbolTable$Entry, entry, get(hashCode));
	while (entry != nullptr) {
		bool var$0 = entry->tag == tag && entry->hashCode$ == hashCode && $nc(entry->name)->equals(name);
		if (var$0 && $nc(entry->value)->equals(descriptor)) {
			return entry->index;
		}
		$assign(entry, entry->next);
	}
	int32_t var$1 = tag;
	int32_t var$2 = addConstantUtf8(name);
	$nc(this->constantPool)->put122(var$1, var$2, addConstantUtf8(descriptor));
	return $nc($(put($$new($SymbolTable$Entry, this->constantPoolCount++, tag, name, descriptor, hashCode))))->index;
}

void SymbolTable::addConstantNameAndType(int32_t index, $String* name, $String* descriptor) {
	int32_t tag = $Symbol::CONSTANT_NAME_AND_TYPE_TAG;
	add($$new($SymbolTable$Entry, index, tag, name, descriptor, hash(tag, name, descriptor)));
}

int32_t SymbolTable::addConstantUtf8($String* value) {
	$useLocalCurrentObjectStackCache();
	int32_t hashCode = hash($Symbol::CONSTANT_UTF8_TAG, value);
	$var($SymbolTable$Entry, entry, get(hashCode));
	while (entry != nullptr) {
		if (entry->tag == $Symbol::CONSTANT_UTF8_TAG && entry->hashCode$ == hashCode && $nc(entry->value)->equals(value)) {
			return entry->index;
		}
		$assign(entry, entry->next);
	}
	$nc($($nc(this->constantPool)->putByte($Symbol::CONSTANT_UTF8_TAG)))->putUTF8(value);
	return $nc($(put($$new($SymbolTable$Entry, this->constantPoolCount++, $Symbol::CONSTANT_UTF8_TAG, value, hashCode))))->index;
}

void SymbolTable::addConstantUtf8(int32_t index, $String* value) {
	add($$new($SymbolTable$Entry, index, $Symbol::CONSTANT_UTF8_TAG, value, hash($Symbol::CONSTANT_UTF8_TAG, value)));
}

$Symbol* SymbolTable::addConstantMethodHandle(int32_t referenceKind, $String* owner, $String* name, $String* descriptor, bool isInterface) {
	$useLocalCurrentObjectStackCache();
	int32_t tag = $Symbol::CONSTANT_METHOD_HANDLE_TAG;
	int32_t hashCode = hash(tag, owner, name, descriptor, referenceKind);
	$var($SymbolTable$Entry, entry, get(hashCode));
	while (entry != nullptr) {
		bool var$1 = entry->tag == tag && entry->hashCode$ == hashCode && entry->data == referenceKind && $nc(entry->owner)->equals(owner);
		bool var$0 = var$1 && $nc(entry->name)->equals(name);
		if (var$0 && $nc(entry->value)->equals(descriptor)) {
			return entry;
		}
		$assign(entry, entry->next);
	}
	if (referenceKind <= $Opcodes::H_PUTSTATIC) {
		$nc(this->constantPool)->put112(tag, referenceKind, $nc($(addConstantFieldref(owner, name, descriptor)))->index);
	} else {
		$nc(this->constantPool)->put112(tag, referenceKind, $nc($(addConstantMethodref(owner, name, descriptor, isInterface)))->index);
	}
	return put($$new($SymbolTable$Entry, this->constantPoolCount++, tag, owner, name, descriptor, referenceKind, hashCode));
}

void SymbolTable::addConstantMethodHandle(int32_t index, int32_t referenceKind, $String* owner, $String* name, $String* descriptor) {
	int32_t tag = $Symbol::CONSTANT_METHOD_HANDLE_TAG;
	int32_t hashCode = hash(tag, owner, name, descriptor, referenceKind);
	add($$new($SymbolTable$Entry, index, tag, owner, name, descriptor, referenceKind, hashCode));
}

$Symbol* SymbolTable::addConstantMethodType($String* methodDescriptor) {
	return addConstantUtf8Reference($Symbol::CONSTANT_METHOD_TYPE_TAG, methodDescriptor);
}

$Symbol* SymbolTable::addConstantDynamic($String* name, $String* descriptor, $Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) {
	$var($Symbol, bootstrapMethod, addBootstrapMethod(bootstrapMethodHandle, bootstrapMethodArguments));
	return addConstantDynamicOrInvokeDynamicReference($Symbol::CONSTANT_DYNAMIC_TAG, name, descriptor, $nc(bootstrapMethod)->index);
}

$Symbol* SymbolTable::addConstantInvokeDynamic($String* name, $String* descriptor, $Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) {
	$var($Symbol, bootstrapMethod, addBootstrapMethod(bootstrapMethodHandle, bootstrapMethodArguments));
	return addConstantDynamicOrInvokeDynamicReference($Symbol::CONSTANT_INVOKE_DYNAMIC_TAG, name, descriptor, $nc(bootstrapMethod)->index);
}

$Symbol* SymbolTable::addConstantDynamicOrInvokeDynamicReference(int32_t tag, $String* name, $String* descriptor, int32_t bootstrapMethodIndex) {
	$useLocalCurrentObjectStackCache();
	int32_t hashCode = hash(tag, name, descriptor, bootstrapMethodIndex);
	$var($SymbolTable$Entry, entry, get(hashCode));
	while (entry != nullptr) {
		bool var$0 = entry->tag == tag && entry->hashCode$ == hashCode && entry->data == bootstrapMethodIndex && $nc(entry->name)->equals(name);
		if (var$0 && $nc(entry->value)->equals(descriptor)) {
			return entry;
		}
		$assign(entry, entry->next);
	}
	$nc(this->constantPool)->put122(tag, bootstrapMethodIndex, addConstantNameAndType(name, descriptor));
	return put($$new($SymbolTable$Entry, this->constantPoolCount++, tag, nullptr, name, descriptor, bootstrapMethodIndex, hashCode));
}

void SymbolTable::addConstantDynamicOrInvokeDynamicReference(int32_t tag, int32_t index, $String* name, $String* descriptor, int32_t bootstrapMethodIndex) {
	int32_t hashCode = hash(tag, name, descriptor, bootstrapMethodIndex);
	add($$new($SymbolTable$Entry, index, tag, nullptr, name, descriptor, bootstrapMethodIndex, hashCode));
}

$Symbol* SymbolTable::addConstantModule($String* moduleName) {
	return addConstantUtf8Reference($Symbol::CONSTANT_MODULE_TAG, moduleName);
}

$Symbol* SymbolTable::addConstantPackage($String* packageName) {
	return addConstantUtf8Reference($Symbol::CONSTANT_PACKAGE_TAG, packageName);
}

$Symbol* SymbolTable::addConstantUtf8Reference(int32_t tag, $String* value) {
	$useLocalCurrentObjectStackCache();
	int32_t hashCode = hash(tag, value);
	$var($SymbolTable$Entry, entry, get(hashCode));
	while (entry != nullptr) {
		if (entry->tag == tag && entry->hashCode$ == hashCode && $nc(entry->value)->equals(value)) {
			return entry;
		}
		$assign(entry, entry->next);
	}
	$nc(this->constantPool)->put12(tag, addConstantUtf8(value));
	return put($$new($SymbolTable$Entry, this->constantPoolCount++, tag, value, hashCode));
}

void SymbolTable::addConstantUtf8Reference(int32_t index, int32_t tag, $String* value) {
	add($$new($SymbolTable$Entry, index, tag, value, hash(tag, value)));
}

$Symbol* SymbolTable::addBootstrapMethod($Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) {
	$useLocalCurrentObjectStackCache();
	$var($ByteVector, bootstrapMethodsAttribute, this->bootstrapMethods);
	if (bootstrapMethodsAttribute == nullptr) {
		$assign(bootstrapMethodsAttribute, ($assignField(this, bootstrapMethods, $new($ByteVector))));
	}
	int32_t numBootstrapArguments = $nc(bootstrapMethodArguments)->length;
	$var($ints, bootstrapMethodArgumentIndexes, $new($ints, numBootstrapArguments));
	for (int32_t i = 0; i < numBootstrapArguments; ++i) {
		bootstrapMethodArgumentIndexes->set(i, $nc($(addConstant(bootstrapMethodArguments->get(i))))->index);
	}
	int32_t bootstrapMethodOffset = $nc(bootstrapMethodsAttribute)->length;
	int32_t var$0 = $nc(bootstrapMethodHandle)->getTag();
	$var($String, var$1, bootstrapMethodHandle->getOwner());
	$var($String, var$2, bootstrapMethodHandle->getName());
	$var($String, var$3, bootstrapMethodHandle->getDesc());
	bootstrapMethodsAttribute->putShort($nc($(addConstantMethodHandle(var$0, var$1, var$2, var$3, bootstrapMethodHandle->isInterface())))->index);
	bootstrapMethodsAttribute->putShort(numBootstrapArguments);
	for (int32_t i = 0; i < numBootstrapArguments; ++i) {
		bootstrapMethodsAttribute->putShort(bootstrapMethodArgumentIndexes->get(i));
	}
	int32_t bootstrapMethodlength = bootstrapMethodsAttribute->length - bootstrapMethodOffset;
	int32_t hashCode = $nc(bootstrapMethodHandle)->hashCode();
	{
		$var($ObjectArray, arr$, bootstrapMethodArguments);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, bootstrapMethodArgument, arr$->get(i$));
			{
				hashCode ^= $nc($of(bootstrapMethodArgument))->hashCode();
			}
		}
	}
	hashCode &= (uint32_t)0x7FFFFFFF;
	return addBootstrapMethod(bootstrapMethodOffset, bootstrapMethodlength, hashCode);
}

$Symbol* SymbolTable::addBootstrapMethod(int32_t offset, int32_t length, int32_t hashCode) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, bootstrapMethodsData, $nc(this->bootstrapMethods)->data);
	$var($SymbolTable$Entry, entry, get(hashCode));
	while (entry != nullptr) {
		if (entry->tag == $Symbol::BOOTSTRAP_METHOD_TAG && entry->hashCode$ == hashCode) {
			int32_t otherOffset = (int32_t)entry->data;
			bool isSameBootstrapMethod = true;
			for (int32_t i = 0; i < length; ++i) {
				if ($nc(bootstrapMethodsData)->get(offset + i) != bootstrapMethodsData->get(otherOffset + i)) {
					isSameBootstrapMethod = false;
					break;
				}
			}
			if (isSameBootstrapMethod) {
				$nc(this->bootstrapMethods)->length = offset;
				return entry;
			}
		}
		$assign(entry, entry->next);
	}
	return put($$new($SymbolTable$Entry, this->bootstrapMethodCount++, $Symbol::BOOTSTRAP_METHOD_TAG, (int64_t)offset, hashCode));
}

$Symbol* SymbolTable::getType(int32_t typeIndex) {
	return $nc(this->typeTable)->get(typeIndex);
}

int32_t SymbolTable::addType($String* value) {
	$useLocalCurrentObjectStackCache();
	int32_t hashCode = hash($Symbol::TYPE_TAG, value);
	$var($SymbolTable$Entry, entry, get(hashCode));
	while (entry != nullptr) {
		if (entry->tag == $Symbol::TYPE_TAG && entry->hashCode$ == hashCode && $nc(entry->value)->equals(value)) {
			return entry->index;
		}
		$assign(entry, entry->next);
	}
	return addTypeInternal($$new($SymbolTable$Entry, this->typeCount, $Symbol::TYPE_TAG, value, hashCode));
}

int32_t SymbolTable::addUninitializedType($String* value, int32_t bytecodeOffset) {
	$useLocalCurrentObjectStackCache();
	int32_t hashCode = hash($Symbol::UNINITIALIZED_TYPE_TAG, value, bytecodeOffset);
	$var($SymbolTable$Entry, entry, get(hashCode));
	while (entry != nullptr) {
		if (entry->tag == $Symbol::UNINITIALIZED_TYPE_TAG && entry->hashCode$ == hashCode && entry->data == bytecodeOffset && $nc(entry->value)->equals(value)) {
			return entry->index;
		}
		$assign(entry, entry->next);
	}
	return addTypeInternal($$new($SymbolTable$Entry, this->typeCount, $Symbol::UNINITIALIZED_TYPE_TAG, value, (int64_t)bytecodeOffset, hashCode));
}

int32_t SymbolTable::addMergedType(int32_t typeTableIndex1, int32_t typeTableIndex2) {
	$useLocalCurrentObjectStackCache();
	int64_t data = typeTableIndex1 < typeTableIndex2 ? typeTableIndex1 | (((int64_t)typeTableIndex2) << 32) : typeTableIndex2 | (((int64_t)typeTableIndex1) << 32);
	int32_t hashCode = hash($Symbol::MERGED_TYPE_TAG, typeTableIndex1 + typeTableIndex2);
	$var($SymbolTable$Entry, entry, get(hashCode));
	while (entry != nullptr) {
		if (entry->tag == $Symbol::MERGED_TYPE_TAG && entry->hashCode$ == hashCode && entry->data == data) {
			return entry->info;
		}
		$assign(entry, entry->next);
	}
	$var($String, type1, $nc($nc(this->typeTable)->get(typeTableIndex1))->value);
	$var($String, type2, $nc($nc(this->typeTable)->get(typeTableIndex2))->value);
	int32_t commonSuperTypeIndex = addType($($nc(this->classWriter)->getCommonSuperClass(type1, type2)));
	$nc($(put($$new($SymbolTable$Entry, this->typeCount, $Symbol::MERGED_TYPE_TAG, data, hashCode))))->info = commonSuperTypeIndex;
	return commonSuperTypeIndex;
}

int32_t SymbolTable::addTypeInternal($SymbolTable$Entry* entry) {
	$useLocalCurrentObjectStackCache();
	if (this->typeTable == nullptr) {
		$set(this, typeTable, $new($SymbolTable$EntryArray, 16));
	}
	if (this->typeCount == $nc(this->typeTable)->length) {
		$var($SymbolTable$EntryArray, newTypeTable, $new($SymbolTable$EntryArray, 2 * $nc(this->typeTable)->length));
		$System::arraycopy(this->typeTable, 0, newTypeTable, 0, $nc(this->typeTable)->length);
		$set(this, typeTable, newTypeTable);
	}
	$nc(this->typeTable)->set(this->typeCount++, entry);
	return $nc($(put(entry)))->index;
}

int32_t SymbolTable::hash(int32_t tag, int32_t value) {
	return (int32_t)(0x7FFFFFFF & (uint32_t)(tag + value));
}

int32_t SymbolTable::hash(int32_t tag, int64_t value) {
	return (int32_t)(0x7FFFFFFF & (uint32_t)(tag + (int32_t)value + (int32_t)((int64_t)((uint64_t)value >> 32))));
}

int32_t SymbolTable::hash(int32_t tag, $String* value) {
	return (int32_t)(0x7FFFFFFF & (uint32_t)(tag + $nc(value)->hashCode()));
}

int32_t SymbolTable::hash(int32_t tag, $String* value1, int32_t value2) {
	return (int32_t)(0x7FFFFFFF & (uint32_t)(tag + $nc(value1)->hashCode() + value2));
}

int32_t SymbolTable::hash(int32_t tag, $String* value1, $String* value2) {
	int32_t var$0 = 0x7FFFFFFF;
	int32_t var$2 = tag;
	int32_t var$4 = $nc(value1)->hashCode();
	int32_t var$3 = var$4 * $nc(value2)->hashCode();
	int32_t var$1 = (var$2 + var$3);
	return (int32_t)(var$0 & var$1);
}

int32_t SymbolTable::hash(int32_t tag, $String* value1, $String* value2, int32_t value3) {
	int32_t var$0 = 0x7FFFFFFF;
	int32_t var$2 = tag;
	int32_t var$4 = $nc(value1)->hashCode();
	int32_t var$3 = var$4 * $nc(value2)->hashCode() * (value3 + 1);
	int32_t var$1 = (var$2 + var$3);
	return (int32_t)(var$0 & var$1);
}

int32_t SymbolTable::hash(int32_t tag, $String* value1, $String* value2, $String* value3) {
	int32_t var$0 = 0x7FFFFFFF;
	int32_t var$2 = tag;
	int32_t var$5 = $nc(value1)->hashCode();
	int32_t var$4 = var$5 * $nc(value2)->hashCode();
	int32_t var$3 = var$4 * $nc(value3)->hashCode();
	int32_t var$1 = (var$2 + var$3);
	return (int32_t)(var$0 & var$1);
}

int32_t SymbolTable::hash(int32_t tag, $String* value1, $String* value2, $String* value3, int32_t value4) {
	int32_t var$0 = 0x7FFFFFFF;
	int32_t var$2 = tag;
	int32_t var$5 = $nc(value1)->hashCode();
	int32_t var$4 = var$5 * $nc(value2)->hashCode();
	int32_t var$3 = var$4 * $nc(value3)->hashCode() * value4;
	int32_t var$1 = (var$2 + var$3);
	return (int32_t)(var$0 & var$1);
}

SymbolTable::SymbolTable() {
}

$Class* SymbolTable::load$($String* name, bool initialize) {
	$loadClass(SymbolTable, name, initialize, &_SymbolTable_ClassInfo_, allocate$SymbolTable);
	return class$;
}

$Class* SymbolTable::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk