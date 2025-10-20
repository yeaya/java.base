#include <jdk/internal/module/ModuleInfo$ConstantPool.h>

#include <java/io/DataInput.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/module/InvalidModuleDescriptorException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/module/ModuleInfo$ConstantPool$Entry.h>
#include <jdk/internal/module/ModuleInfo$ConstantPool$Index2Entry.h>
#include <jdk/internal/module/ModuleInfo$ConstantPool$IndexEntry.h>
#include <jdk/internal/module/ModuleInfo$ConstantPool$ValueEntry.h>
#include <jdk/internal/module/ModuleInfo.h>
#include <jcpp.h>

using $ModuleInfo$ConstantPool$EntryArray = $Array<::jdk::internal::module::ModuleInfo$ConstantPool$Entry>;
using $DataInput = ::java::io::DataInput;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $InvalidModuleDescriptorException = ::java::lang::module::InvalidModuleDescriptorException;
using $ModuleInfo = ::jdk::internal::module::ModuleInfo;
using $ModuleInfo$ConstantPool$Entry = ::jdk::internal::module::ModuleInfo$ConstantPool$Entry;
using $ModuleInfo$ConstantPool$Index2Entry = ::jdk::internal::module::ModuleInfo$ConstantPool$Index2Entry;
using $ModuleInfo$ConstantPool$IndexEntry = ::jdk::internal::module::ModuleInfo$ConstantPool$IndexEntry;
using $ModuleInfo$ConstantPool$ValueEntry = ::jdk::internal::module::ModuleInfo$ConstantPool$ValueEntry;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _ModuleInfo$ConstantPool_FieldInfo_[] = {
	{"CONSTANT_Utf8", "I", nullptr, $STATIC | $FINAL, $constField(ModuleInfo$ConstantPool, CONSTANT_Utf8)},
	{"CONSTANT_Integer", "I", nullptr, $STATIC | $FINAL, $constField(ModuleInfo$ConstantPool, CONSTANT_Integer)},
	{"CONSTANT_Float", "I", nullptr, $STATIC | $FINAL, $constField(ModuleInfo$ConstantPool, CONSTANT_Float)},
	{"CONSTANT_Long", "I", nullptr, $STATIC | $FINAL, $constField(ModuleInfo$ConstantPool, CONSTANT_Long)},
	{"CONSTANT_Double", "I", nullptr, $STATIC | $FINAL, $constField(ModuleInfo$ConstantPool, CONSTANT_Double)},
	{"CONSTANT_Class", "I", nullptr, $STATIC | $FINAL, $constField(ModuleInfo$ConstantPool, CONSTANT_Class)},
	{"CONSTANT_String", "I", nullptr, $STATIC | $FINAL, $constField(ModuleInfo$ConstantPool, CONSTANT_String)},
	{"CONSTANT_Fieldref", "I", nullptr, $STATIC | $FINAL, $constField(ModuleInfo$ConstantPool, CONSTANT_Fieldref)},
	{"CONSTANT_Methodref", "I", nullptr, $STATIC | $FINAL, $constField(ModuleInfo$ConstantPool, CONSTANT_Methodref)},
	{"CONSTANT_InterfaceMethodref", "I", nullptr, $STATIC | $FINAL, $constField(ModuleInfo$ConstantPool, CONSTANT_InterfaceMethodref)},
	{"CONSTANT_NameAndType", "I", nullptr, $STATIC | $FINAL, $constField(ModuleInfo$ConstantPool, CONSTANT_NameAndType)},
	{"CONSTANT_MethodHandle", "I", nullptr, $STATIC | $FINAL, $constField(ModuleInfo$ConstantPool, CONSTANT_MethodHandle)},
	{"CONSTANT_MethodType", "I", nullptr, $STATIC | $FINAL, $constField(ModuleInfo$ConstantPool, CONSTANT_MethodType)},
	{"CONSTANT_InvokeDynamic", "I", nullptr, $STATIC | $FINAL, $constField(ModuleInfo$ConstantPool, CONSTANT_InvokeDynamic)},
	{"CONSTANT_Module", "I", nullptr, $STATIC | $FINAL, $constField(ModuleInfo$ConstantPool, CONSTANT_Module)},
	{"CONSTANT_Package", "I", nullptr, $STATIC | $FINAL, $constField(ModuleInfo$ConstantPool, CONSTANT_Package)},
	{"pool", "[Ljdk/internal/module/ModuleInfo$ConstantPool$Entry;", nullptr, $FINAL, $field(ModuleInfo$ConstantPool, pool)},
	{}
};

$MethodInfo _ModuleInfo$ConstantPool_MethodInfo_[] = {
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(static_cast<void(ModuleInfo$ConstantPool::*)($DataInput*)>(&ModuleInfo$ConstantPool::init$)), "java.io.IOException"},
	{"checkIndex", "(I)V", nullptr, 0},
	{"checkUnqualifiedName", "(Ljava/lang/String;ILjava/lang/String;)V", nullptr, 0},
	{"decodeModuleName", "(ILjava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{"decodeModuleName", "(IILjava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{"getClassName", "(I)Ljava/lang/String;", nullptr, 0},
	{"getModuleName", "(I)Ljava/lang/String;", nullptr, 0},
	{"getPackageName", "(I)Ljava/lang/String;", nullptr, 0},
	{"getUtf8", "(I)Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _ModuleInfo$ConstantPool_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModuleInfo$ConstantPool", "jdk.internal.module.ModuleInfo", "ConstantPool", $PRIVATE | $STATIC},
	{"jdk.internal.module.ModuleInfo$ConstantPool$ValueEntry", "jdk.internal.module.ModuleInfo$ConstantPool", "ValueEntry", $PRIVATE | $STATIC},
	{"jdk.internal.module.ModuleInfo$ConstantPool$Index2Entry", "jdk.internal.module.ModuleInfo$ConstantPool", "Index2Entry", $PRIVATE | $STATIC},
	{"jdk.internal.module.ModuleInfo$ConstantPool$IndexEntry", "jdk.internal.module.ModuleInfo$ConstantPool", "IndexEntry", $PRIVATE | $STATIC},
	{"jdk.internal.module.ModuleInfo$ConstantPool$Entry", "jdk.internal.module.ModuleInfo$ConstantPool", "Entry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ModuleInfo$ConstantPool_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.ModuleInfo$ConstantPool",
	"java.lang.Object",
	nullptr,
	_ModuleInfo$ConstantPool_FieldInfo_,
	_ModuleInfo$ConstantPool_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleInfo$ConstantPool_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModuleInfo"
};

$Object* allocate$ModuleInfo$ConstantPool($Class* clazz) {
	return $of($alloc(ModuleInfo$ConstantPool));
}

void ModuleInfo$ConstantPool::init$($DataInput* in) {
	$useLocalCurrentObjectStackCache();
	int32_t count = $nc(in)->readUnsignedShort();
	$set(this, pool, $new($ModuleInfo$ConstantPool$EntryArray, count));
	for (int32_t i = 1; i < count; ++i) {
		int32_t tag = in->readUnsignedByte();
		{
			$var($String, svalue, nullptr)
			int32_t index = 0;
			double dvalue = 0;
			int32_t index1 = 0;
			int32_t index2 = 0;
			int32_t refKind = 0;
			float fvalue = 0;
			int32_t ivalue = 0;
			int64_t lvalue = 0;
			switch (tag) {
			case ModuleInfo$ConstantPool::CONSTANT_Utf8:
				{
					$assign(svalue, in->readUTF());
					$nc(this->pool)->set(i, $$new($ModuleInfo$ConstantPool$ValueEntry, tag, svalue));
					break;
				}
			case ModuleInfo$ConstantPool::CONSTANT_Class:
				{}
			case ModuleInfo$ConstantPool::CONSTANT_Package:
				{}
			case ModuleInfo$ConstantPool::CONSTANT_Module:
				{}
			case ModuleInfo$ConstantPool::CONSTANT_String:
				{
					index = in->readUnsignedShort();
					$nc(this->pool)->set(i, $$new($ModuleInfo$ConstantPool$IndexEntry, tag, index));
					break;
				}
			case ModuleInfo$ConstantPool::CONSTANT_Double:
				{
					dvalue = in->readDouble();
					$nc(this->pool)->set(i, $$new($ModuleInfo$ConstantPool$ValueEntry, tag, $($Double::valueOf(dvalue))));
					++i;
					break;
				}
			case ModuleInfo$ConstantPool::CONSTANT_Fieldref:
				{}
			case ModuleInfo$ConstantPool::CONSTANT_InterfaceMethodref:
				{}
			case ModuleInfo$ConstantPool::CONSTANT_Methodref:
				{}
			case ModuleInfo$ConstantPool::CONSTANT_InvokeDynamic:
				{}
			case ModuleInfo$ConstantPool::CONSTANT_NameAndType:
				{
					index1 = in->readUnsignedShort();
					index2 = in->readUnsignedShort();
					$nc(this->pool)->set(i, $$new($ModuleInfo$ConstantPool$Index2Entry, tag, index1, index2));
					break;
				}
			case ModuleInfo$ConstantPool::CONSTANT_MethodHandle:
				{
					refKind = in->readUnsignedByte();
					index = in->readUnsignedShort();
					$nc(this->pool)->set(i, $$new($ModuleInfo$ConstantPool$Index2Entry, tag, refKind, index));
					break;
				}
			case ModuleInfo$ConstantPool::CONSTANT_MethodType:
				{
					index = in->readUnsignedShort();
					$nc(this->pool)->set(i, $$new($ModuleInfo$ConstantPool$IndexEntry, tag, index));
					break;
				}
			case ModuleInfo$ConstantPool::CONSTANT_Float:
				{
					fvalue = in->readFloat();
					$nc(this->pool)->set(i, $$new($ModuleInfo$ConstantPool$ValueEntry, tag, $($Float::valueOf(fvalue))));
					break;
				}
			case ModuleInfo$ConstantPool::CONSTANT_Integer:
				{
					ivalue = in->readInt();
					$nc(this->pool)->set(i, $$new($ModuleInfo$ConstantPool$ValueEntry, tag, $($Integer::valueOf(ivalue))));
					break;
				}
			case ModuleInfo$ConstantPool::CONSTANT_Long:
				{
					lvalue = in->readLong();
					$nc(this->pool)->set(i, $$new($ModuleInfo$ConstantPool$ValueEntry, tag, $($Long::valueOf(lvalue))));
					++i;
					break;
				}
			default:
				{
					$throw($($ModuleInfo::invalidModuleDescriptor($$str({"Bad constant pool entry: "_s, $$str(i)}))));
				}
			}
		}
	}
}

$String* ModuleInfo$ConstantPool::getClassName(int32_t index) {
	$useLocalCurrentObjectStackCache();
	checkIndex(index);
	$var($ModuleInfo$ConstantPool$Entry, e, $nc(this->pool)->get(index));
	if ($nc(e)->tag != ModuleInfo$ConstantPool::CONSTANT_Class) {
		$throw($($ModuleInfo::invalidModuleDescriptor($$str({"CONSTANT_Class expected at entry: "_s, $$str(index)}))));
	}
	$var($String, value, getUtf8($nc(($cast($ModuleInfo$ConstantPool$IndexEntry, e)))->index));
	checkUnqualifiedName("CONSTANT_Class"_s, index, value);
	return $nc(value)->replace(u'/', u'.');
}

$String* ModuleInfo$ConstantPool::getPackageName(int32_t index) {
	$useLocalCurrentObjectStackCache();
	checkIndex(index);
	$var($ModuleInfo$ConstantPool$Entry, e, $nc(this->pool)->get(index));
	if ($nc(e)->tag != ModuleInfo$ConstantPool::CONSTANT_Package) {
		$throw($($ModuleInfo::invalidModuleDescriptor($$str({"CONSTANT_Package expected at entry: "_s, $$str(index)}))));
	}
	$var($String, value, getUtf8($nc(($cast($ModuleInfo$ConstantPool$IndexEntry, e)))->index));
	checkUnqualifiedName("CONSTANT_Package"_s, index, value);
	return $nc(value)->replace(u'/', u'.');
}

$String* ModuleInfo$ConstantPool::getModuleName(int32_t index) {
	$useLocalCurrentObjectStackCache();
	checkIndex(index);
	$var($ModuleInfo$ConstantPool$Entry, e, $nc(this->pool)->get(index));
	if ($nc(e)->tag != ModuleInfo$ConstantPool::CONSTANT_Module) {
		$throw($($ModuleInfo::invalidModuleDescriptor($$str({"CONSTANT_Module expected at entry: "_s, $$str(index)}))));
	}
	$var($String, value, getUtf8($nc(($cast($ModuleInfo$ConstantPool$IndexEntry, e)))->index));
	return decodeModuleName(index, value);
}

$String* ModuleInfo$ConstantPool::getUtf8(int32_t index) {
	$useLocalCurrentObjectStackCache();
	checkIndex(index);
	$var($ModuleInfo$ConstantPool$Entry, e, $nc(this->pool)->get(index));
	if ($nc(e)->tag != ModuleInfo$ConstantPool::CONSTANT_Utf8) {
		$throw($($ModuleInfo::invalidModuleDescriptor($$str({"CONSTANT_Utf8 expected at entry: "_s, $$str(index)}))));
	}
	return ($cast($String, $nc(($cast($ModuleInfo$ConstantPool$ValueEntry, e)))->value));
}

void ModuleInfo$ConstantPool::checkIndex(int32_t index) {
	if (index < 1 || index >= $nc(this->pool)->length) {
		$throw($($ModuleInfo::invalidModuleDescriptor("Index into constant pool out of range"_s)));
	}
}

void ModuleInfo$ConstantPool::checkUnqualifiedName($String* what, int32_t index, $String* value) {
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(value)->length();
	if (len == 0) {
		$throw($($ModuleInfo::invalidModuleDescriptor($$str({what, " at entry "_s, $$str(index), " has zero length"_s}))));
	}
	for (int32_t i = 0; i < len; ++i) {
		char16_t c = value->charAt(i);
		if (c == u'.' || c == u';' || c == u'[') {
			$throw($($ModuleInfo::invalidModuleDescriptor($$str({what, " at entry "_s, $$str(index), " has illegal character: \'"_s, $$str(c), "\'"_s}))));
		}
	}
}

$String* ModuleInfo$ConstantPool::decodeModuleName(int32_t index, $String* value) {
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(value)->length();
	if (len == 0) {
		$throw($($ModuleInfo::invalidModuleDescriptor($$str({"CONSTANT_Module at entry "_s, $$str(index), " is zero length"_s}))));
	}
	int32_t i = 0;
	while (i < len) {
		int32_t cp = value->codePointAt(i);
		if (cp == u':' || cp == u'@' || cp < 32) {
			$throw($($ModuleInfo::invalidModuleDescriptor($$str({"CONSTANT_Module at entry "_s, $$str(index), " has illegal character: "_s, $($Character::getName(cp))}))));
		}
		if (cp == u'\\') {
			return decodeModuleName(index, i, value);
		}
		i += $Character::charCount(cp);
	}
	return value;
}

$String* ModuleInfo$ConstantPool::decodeModuleName(int32_t index, int32_t i, $String* value) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	int32_t j = 0;
	while (j < i) {
		int32_t cp = $nc(value)->codePointAt(j);
		sb->appendCodePoint(cp);
		j += $Character::charCount(cp);
	}
	int32_t len = $nc(value)->length();
	while (i < len) {
		int32_t cp = value->codePointAt(i);
		if (cp == u':' || cp == u'@' || cp < 32) {
			$throw($($ModuleInfo::invalidModuleDescriptor($$str({"CONSTANT_Module at entry "_s, $$str(index), " has illegal character: "_s, $($Character::getName(cp))}))));
		}
		if (cp == u'\\') {
			j = i + $Character::charCount(cp);
			if (j >= len) {
				$throw($($ModuleInfo::invalidModuleDescriptor($$str({"CONSTANT_Module at entry "_s, $$str(index), " has illegal escape sequence"_s}))));
			}
			int32_t next = value->codePointAt(j);
			if (next != u'\\' && next != u':' && next != u'@') {
				$throw($($ModuleInfo::invalidModuleDescriptor($$str({"CONSTANT_Module at entry "_s, $$str(index), " has illegal escape sequence"_s}))));
			}
			sb->appendCodePoint(next);
			i += $Character::charCount(next);
		} else {
			sb->appendCodePoint(cp);
		}
		i += $Character::charCount(cp);
	}
	return sb->toString();
}

ModuleInfo$ConstantPool::ModuleInfo$ConstantPool() {
}

$Class* ModuleInfo$ConstantPool::load$($String* name, bool initialize) {
	$loadClass(ModuleInfo$ConstantPool, name, initialize, &_ModuleInfo$ConstantPool_ClassInfo_, allocate$ModuleInfo$ConstantPool);
	return class$;
}

$Class* ModuleInfo$ConstantPool::class$ = nullptr;

		} // module
	} // internal
} // jdk