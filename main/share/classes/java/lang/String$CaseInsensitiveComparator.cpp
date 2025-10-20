#include <java/lang/String$CaseInsensitiveComparator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringLatin1.h>
#include <java/lang/StringUTF16.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Comparator.h>
#include <jcpp.h>

#undef CASE_INSENSITIVE_ORDER

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringLatin1 = ::java::lang::StringLatin1;
using $StringUTF16 = ::java::lang::StringUTF16;
using $Comparator = ::java::util::Comparator;

namespace java {
	namespace lang {

$FieldInfo _String$CaseInsensitiveComparator_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(String$CaseInsensitiveComparator, serialVersionUID)},
	{}
};

$MethodInfo _String$CaseInsensitiveComparator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(String$CaseInsensitiveComparator::*)()>(&String$CaseInsensitiveComparator::init$))},
	{"compare", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(String$CaseInsensitiveComparator::*)()>(&String$CaseInsensitiveComparator::readResolve))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _String$CaseInsensitiveComparator_InnerClassesInfo_[] = {
	{"java.lang.String$CaseInsensitiveComparator", "java.lang.String", "CaseInsensitiveComparator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _String$CaseInsensitiveComparator_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.String$CaseInsensitiveComparator",
	"java.lang.Object",
	"java.util.Comparator,java.io.Serializable",
	_String$CaseInsensitiveComparator_FieldInfo_,
	_String$CaseInsensitiveComparator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/String;>;Ljava/io/Serializable;",
	nullptr,
	_String$CaseInsensitiveComparator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.String"
};

$Object* allocate$String$CaseInsensitiveComparator($Class* clazz) {
	return $of($alloc(String$CaseInsensitiveComparator));
}

bool String$CaseInsensitiveComparator::equals(Object$* obj) {
	 return this->$Comparator::equals(obj);
}

int32_t String$CaseInsensitiveComparator::hashCode() {
	 return this->$Comparator::hashCode();
}

$Object* String$CaseInsensitiveComparator::clone() {
	 return this->$Comparator::clone();
}

$String* String$CaseInsensitiveComparator::toString() {
	 return this->$Comparator::toString();
}

void String$CaseInsensitiveComparator::finalize() {
	this->$Comparator::finalize();
}

void String$CaseInsensitiveComparator::init$() {
}

int32_t String$CaseInsensitiveComparator::compare($String* s1, $String* s2) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, v1, $nc(s1)->value$);
	$var($bytes, v2, $nc(s2)->value$);
	int8_t coder = s1->coder();
	if (coder == s2->coder()) {
		return coder == (int8_t)0 ? $StringLatin1::compareToCI(v1, v2) : $StringUTF16::compareToCI(v1, v2);
	}
	return coder == (int8_t)0 ? $StringLatin1::compareToCI_UTF16(v1, v2) : $StringUTF16::compareToCI_Latin1(v1, v2);
}

$Object* String$CaseInsensitiveComparator::readResolve() {
	$init($String);
	return $of($String::CASE_INSENSITIVE_ORDER);
}

int32_t String$CaseInsensitiveComparator::compare(Object$* s1, Object$* s2) {
	return this->compare($cast($String, s1), $cast($String, s2));
}

String$CaseInsensitiveComparator::String$CaseInsensitiveComparator() {
}

$Class* String$CaseInsensitiveComparator::load$($String* name, bool initialize) {
	$loadClass(String$CaseInsensitiveComparator, name, initialize, &_String$CaseInsensitiveComparator_ClassInfo_, allocate$String$CaseInsensitiveComparator);
	return class$;
}

$Class* String$CaseInsensitiveComparator::class$ = nullptr;

	} // lang
} // java