#include <java/text/MessageFormat$Field.h>

#include <java/io/InvalidObjectException.h>
#include <java/text/Format$Field.h>
#include <java/text/MessageFormat.h>
#include <jcpp.h>

#undef ARGUMENT

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Format$Field = ::java::text::Format$Field;

namespace java {
	namespace text {

$FieldInfo _MessageFormat$Field_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MessageFormat$Field, serialVersionUID)},
	{"ARGUMENT", "Ljava/text/MessageFormat$Field;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MessageFormat$Field, ARGUMENT)},
	{}
};

$MethodInfo _MessageFormat$Field_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(MessageFormat$Field::*)($String*)>(&MessageFormat$Field::init$))},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "java.io.InvalidObjectException"},
	{}
};

$InnerClassInfo _MessageFormat$Field_InnerClassesInfo_[] = {
	{"java.text.MessageFormat$Field", "java.text.MessageFormat", "Field", $PUBLIC | $STATIC},
	{"java.text.Format$Field", "java.text.Format", "Field", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MessageFormat$Field_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.text.MessageFormat$Field",
	"java.text.Format$Field",
	nullptr,
	_MessageFormat$Field_FieldInfo_,
	_MessageFormat$Field_MethodInfo_,
	nullptr,
	nullptr,
	_MessageFormat$Field_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.text.MessageFormat"
};

$Object* allocate$MessageFormat$Field($Class* clazz) {
	return $of($alloc(MessageFormat$Field));
}

MessageFormat$Field* MessageFormat$Field::ARGUMENT = nullptr;

void MessageFormat$Field::init$($String* name) {
	$Format$Field::init$(name);
}

$Object* MessageFormat$Field::readResolve() {
	if ($of(this)->getClass() != MessageFormat$Field::class$) {
		$throwNew($InvalidObjectException, "subclass didn\'t correctly implement readResolve"_s);
	}
	return $of(MessageFormat$Field::ARGUMENT);
}

void clinit$MessageFormat$Field($Class* class$) {
	$assignStatic(MessageFormat$Field::ARGUMENT, $new(MessageFormat$Field, "message argument field"_s));
}

MessageFormat$Field::MessageFormat$Field() {
}

$Class* MessageFormat$Field::load$($String* name, bool initialize) {
	$loadClass(MessageFormat$Field, name, initialize, &_MessageFormat$Field_ClassInfo_, clinit$MessageFormat$Field, allocate$MessageFormat$Field);
	return class$;
}

$Class* MessageFormat$Field::class$ = nullptr;

	} // text
} // java