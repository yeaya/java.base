#include <java/text/Format$Field.h>

#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/Format.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $Format = ::java::text::Format;

namespace java {
	namespace text {

$FieldInfo _Format$Field_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Format$Field, serialVersionUID)},
	{}
};

$MethodInfo _Format$Field_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(Format$Field::*)($String*)>(&Format$Field::init$))},
	{}
};

$InnerClassInfo _Format$Field_InnerClassesInfo_[] = {
	{"java.text.Format$Field", "java.text.Format", "Field", $PUBLIC | $STATIC},
	{"java.text.AttributedCharacterIterator$Attribute", "java.text.AttributedCharacterIterator", "Attribute", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Format$Field_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.text.Format$Field",
	"java.text.AttributedCharacterIterator$Attribute",
	nullptr,
	_Format$Field_FieldInfo_,
	_Format$Field_MethodInfo_,
	nullptr,
	nullptr,
	_Format$Field_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.text.Format"
};

$Object* allocate$Format$Field($Class* clazz) {
	return $of($alloc(Format$Field));
}

void Format$Field::init$($String* name) {
	$AttributedCharacterIterator$Attribute::init$(name);
}

Format$Field::Format$Field() {
}

$Class* Format$Field::load$($String* name, bool initialize) {
	$loadClass(Format$Field, name, initialize, &_Format$Field_ClassInfo_, allocate$Format$Field);
	return class$;
}

$Class* Format$Field::class$ = nullptr;

	} // text
} // java