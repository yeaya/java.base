#include <jdk/internal/org/objectweb/asm/commons/ModuleResolutionAttribute.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jdk/internal/org/objectweb/asm/ByteVector.h>
#include <jdk/internal/org/objectweb/asm/ClassReader.h>
#include <jdk/internal/org/objectweb/asm/ClassWriter.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jcpp.h>

#undef RESOLUTION_DO_NOT_RESOLVE_BY_DEFAULT
#undef RESOLUTION_WARN_DEPRECATED
#undef RESOLUTION_WARN_DEPRECATED_FOR_REMOVAL
#undef RESOLUTION_WARN_INCUBATING

using $LabelArray = $Array<::jdk::internal::org::objectweb::asm$::Label>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attribute = ::jdk::internal::org::objectweb::asm$::Attribute;
using $ByteVector = ::jdk::internal::org::objectweb::asm$::ByteVector;
using $ClassReader = ::jdk::internal::org::objectweb::asm$::ClassReader;
using $ClassWriter = ::jdk::internal::org::objectweb::asm$::ClassWriter;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

$FieldInfo _ModuleResolutionAttribute_FieldInfo_[] = {
	{"RESOLUTION_DO_NOT_RESOLVE_BY_DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ModuleResolutionAttribute, RESOLUTION_DO_NOT_RESOLVE_BY_DEFAULT)},
	{"RESOLUTION_WARN_DEPRECATED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ModuleResolutionAttribute, RESOLUTION_WARN_DEPRECATED)},
	{"RESOLUTION_WARN_DEPRECATED_FOR_REMOVAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ModuleResolutionAttribute, RESOLUTION_WARN_DEPRECATED_FOR_REMOVAL)},
	{"RESOLUTION_WARN_INCUBATING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ModuleResolutionAttribute, RESOLUTION_WARN_INCUBATING)},
	{"resolution", "I", nullptr, $PUBLIC, $field(ModuleResolutionAttribute, resolution)},
	{}
};

$MethodInfo _ModuleResolutionAttribute_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ModuleResolutionAttribute::*)(int32_t)>(&ModuleResolutionAttribute::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModuleResolutionAttribute::*)()>(&ModuleResolutionAttribute::init$))},
	{"read", "(Ljdk/internal/org/objectweb/asm/ClassReader;II[CI[Ljdk/internal/org/objectweb/asm/Label;)Ljdk/internal/org/objectweb/asm/Attribute;", nullptr, $PROTECTED},
	{"write", "(Ljdk/internal/org/objectweb/asm/ClassWriter;[BIII)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _ModuleResolutionAttribute_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.commons.ModuleResolutionAttribute",
	"jdk.internal.org.objectweb.asm.Attribute",
	nullptr,
	_ModuleResolutionAttribute_FieldInfo_,
	_ModuleResolutionAttribute_MethodInfo_
};

$Object* allocate$ModuleResolutionAttribute($Class* clazz) {
	return $of($alloc(ModuleResolutionAttribute));
}

void ModuleResolutionAttribute::init$(int32_t resolution) {
	$Attribute::init$("ModuleResolution"_s);
	this->resolution = resolution;
}

void ModuleResolutionAttribute::init$() {
	ModuleResolutionAttribute::init$(0);
}

$Attribute* ModuleResolutionAttribute::read($ClassReader* classReader, int32_t offset, int32_t length, $chars* charBuffer, int32_t codeOffset, $LabelArray* labels) {
	return $new(ModuleResolutionAttribute, $nc(classReader)->readUnsignedShort(offset));
}

$ByteVector* ModuleResolutionAttribute::write($ClassWriter* classWriter, $bytes* code, int32_t codeLength, int32_t maxStack, int32_t maxLocals) {
	$var($ByteVector, byteVector, $new($ByteVector));
	byteVector->putShort(this->resolution);
	return byteVector;
}

ModuleResolutionAttribute::ModuleResolutionAttribute() {
}

$Class* ModuleResolutionAttribute::load$($String* name, bool initialize) {
	$loadClass(ModuleResolutionAttribute, name, initialize, &_ModuleResolutionAttribute_ClassInfo_, allocate$ModuleResolutionAttribute);
	return class$;
}

$Class* ModuleResolutionAttribute::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk