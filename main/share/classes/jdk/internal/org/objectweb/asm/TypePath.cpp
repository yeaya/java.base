#include <jdk/internal/org/objectweb/asm/TypePath.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/ByteVector.h>
#include <jcpp.h>

#undef ARRAY_ELEMENT
#undef INNER_TYPE
#undef TYPE_ARGUMENT
#undef WILDCARD_BOUND

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteVector = ::jdk::internal::org::objectweb::asm$::ByteVector;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _TypePath_FieldInfo_[] = {
	{"ARRAY_ELEMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypePath, ARRAY_ELEMENT)},
	{"INNER_TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypePath, INNER_TYPE)},
	{"WILDCARD_BOUND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypePath, WILDCARD_BOUND)},
	{"TYPE_ARGUMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypePath, TYPE_ARGUMENT)},
	{"typePathContainer", "[B", nullptr, $PRIVATE | $FINAL, $field(TypePath, typePathContainer)},
	{"typePathOffset", "I", nullptr, $PRIVATE | $FINAL, $field(TypePath, typePathOffset)},
	{}
};

$MethodInfo _TypePath_MethodInfo_[] = {
	{"<init>", "([BI)V", nullptr, 0, $method(static_cast<void(TypePath::*)($bytes*,int32_t)>(&TypePath::init$))},
	{"fromString", "(Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/TypePath;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypePath*(*)($String*)>(&TypePath::fromString))},
	{"getLength", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(TypePath::*)()>(&TypePath::getLength))},
	{"getStep", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(TypePath::*)(int32_t)>(&TypePath::getStep))},
	{"getStepArgument", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(TypePath::*)(int32_t)>(&TypePath::getStepArgument))},
	{"put", "(Ljdk/internal/org/objectweb/asm/TypePath;Ljdk/internal/org/objectweb/asm/ByteVector;)V", nullptr, $STATIC, $method(static_cast<void(*)(TypePath*,$ByteVector*)>(&TypePath::put))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TypePath_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.TypePath",
	"java.lang.Object",
	nullptr,
	_TypePath_FieldInfo_,
	_TypePath_MethodInfo_
};

$Object* allocate$TypePath($Class* clazz) {
	return $of($alloc(TypePath));
}

void TypePath::init$($bytes* typePathContainer, int32_t typePathOffset) {
	$set(this, typePathContainer, typePathContainer);
	this->typePathOffset = typePathOffset;
}

int32_t TypePath::getLength() {
	return $nc(this->typePathContainer)->get(this->typePathOffset);
}

int32_t TypePath::getStep(int32_t index) {
	return $nc(this->typePathContainer)->get(this->typePathOffset + 2 * index + 1);
}

int32_t TypePath::getStepArgument(int32_t index) {
	return $nc(this->typePathContainer)->get(this->typePathOffset + 2 * index + 2);
}

TypePath* TypePath::fromString($String* typePath) {
	if (typePath == nullptr || $nc(typePath)->length() == 0) {
		return nullptr;
	}
	int32_t typePathLength = $nc(typePath)->length();
	$var($ByteVector, output, $new($ByteVector, typePathLength));
	output->putByte(0);
	int32_t typePathIndex = 0;
	while (typePathIndex < typePathLength) {
		char16_t c = typePath->charAt(typePathIndex++);
		if (c == u'[') {
			output->put11(TypePath::ARRAY_ELEMENT, 0);
		} else if (c == u'.') {
			output->put11(TypePath::INNER_TYPE, 0);
		} else if (c == u'*') {
			output->put11(TypePath::WILDCARD_BOUND, 0);
		} else if (c >= u'0' && c <= u'9') {
			int32_t typeArg = c - u'0';
			while (typePathIndex < typePathLength) {
				c = typePath->charAt(typePathIndex++);
				if (c >= u'0' && c <= u'9') {
					typeArg = typeArg * 10 + c - u'0';
				} else if (c == u';') {
					break;
				} else {
					$throwNew($IllegalArgumentException);
				}
			}
			output->put11(TypePath::TYPE_ARGUMENT, typeArg);
		} else {
			$throwNew($IllegalArgumentException);
		}
	}
	$nc(output->data)->set(0, (int8_t)(output->length / 2));
	return $new(TypePath, output->data, 0);
}

$String* TypePath::toString() {
	int32_t length = getLength();
	$var($StringBuilder, result, $new($StringBuilder, length * 2));
	for (int32_t i = 0; i < length; ++i) {
		switch (getStep(i)) {
		case TypePath::ARRAY_ELEMENT:
			{
				result->append(u'[');
				break;
			}
		case TypePath::INNER_TYPE:
			{
				result->append(u'.');
				break;
			}
		case TypePath::WILDCARD_BOUND:
			{
				result->append(u'*');
				break;
			}
		case TypePath::TYPE_ARGUMENT:
			{
				result->append(getStepArgument(i))->append(u';');
				break;
			}
		default:
			{
				$throwNew($AssertionError);
			}
		}
	}
	return result->toString();
}

void TypePath::put(TypePath* typePath, $ByteVector* output) {
	if (typePath == nullptr) {
		$nc(output)->putByte(0);
	} else {
		int32_t length = $nc($nc(typePath)->typePathContainer)->get(typePath->typePathOffset) * 2 + 1;
		$nc(output)->putByteArray(typePath->typePathContainer, typePath->typePathOffset, length);
	}
}

TypePath::TypePath() {
}

$Class* TypePath::load$($String* name, bool initialize) {
	$loadClass(TypePath, name, initialize, &_TypePath_ClassInfo_, allocate$TypePath);
	return class$;
}

$Class* TypePath::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk