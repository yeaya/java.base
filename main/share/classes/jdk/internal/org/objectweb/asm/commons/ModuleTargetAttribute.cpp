#include <jdk/internal/org/objectweb/asm/commons/ModuleTargetAttribute.h>

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

$FieldInfo _ModuleTargetAttribute_FieldInfo_[] = {
	{"platform", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ModuleTargetAttribute, platform)},
	{}
};

$MethodInfo _ModuleTargetAttribute_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ModuleTargetAttribute::*)($String*)>(&ModuleTargetAttribute::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModuleTargetAttribute::*)()>(&ModuleTargetAttribute::init$))},
	{"read", "(Ljdk/internal/org/objectweb/asm/ClassReader;II[CI[Ljdk/internal/org/objectweb/asm/Label;)Ljdk/internal/org/objectweb/asm/Attribute;", nullptr, $PROTECTED},
	{"write", "(Ljdk/internal/org/objectweb/asm/ClassWriter;[BIII)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _ModuleTargetAttribute_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.commons.ModuleTargetAttribute",
	"jdk.internal.org.objectweb.asm.Attribute",
	nullptr,
	_ModuleTargetAttribute_FieldInfo_,
	_ModuleTargetAttribute_MethodInfo_
};

$Object* allocate$ModuleTargetAttribute($Class* clazz) {
	return $of($alloc(ModuleTargetAttribute));
}

void ModuleTargetAttribute::init$($String* platform) {
	$Attribute::init$("ModuleTarget"_s);
	$set(this, platform, platform);
}

void ModuleTargetAttribute::init$() {
	ModuleTargetAttribute::init$(nullptr);
}

$Attribute* ModuleTargetAttribute::read($ClassReader* classReader, int32_t offset, int32_t length, $chars* charBuffer, int32_t codeOffset, $LabelArray* labels) {
	return $new(ModuleTargetAttribute, $($nc(classReader)->readUTF8(offset, charBuffer)));
}

$ByteVector* ModuleTargetAttribute::write($ClassWriter* classWriter, $bytes* code, int32_t codeLength, int32_t maxStack, int32_t maxLocals) {
	$var($ByteVector, byteVector, $new($ByteVector));
	byteVector->putShort(this->platform == nullptr ? 0 : $nc(classWriter)->newUTF8(this->platform));
	return byteVector;
}

ModuleTargetAttribute::ModuleTargetAttribute() {
}

$Class* ModuleTargetAttribute::load$($String* name, bool initialize) {
	$loadClass(ModuleTargetAttribute, name, initialize, &_ModuleTargetAttribute_ClassInfo_, allocate$ModuleTargetAttribute);
	return class$;
}

$Class* ModuleTargetAttribute::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk