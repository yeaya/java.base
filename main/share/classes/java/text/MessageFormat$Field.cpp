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

MessageFormat$Field* MessageFormat$Field::ARGUMENT = nullptr;

void MessageFormat$Field::init$($String* name) {
	$Format$Field::init$(name);
}

$Object* MessageFormat$Field::readResolve() {
	if (this->getClass() != MessageFormat$Field::class$) {
		$throwNew($InvalidObjectException, "subclass didn\'t correctly implement readResolve"_s);
	}
	return MessageFormat$Field::ARGUMENT;
}

void MessageFormat$Field::clinit$($Class* clazz) {
	$assignStatic(MessageFormat$Field::ARGUMENT, $new(MessageFormat$Field, "message argument field"_s));
}

MessageFormat$Field::MessageFormat$Field() {
}

$Class* MessageFormat$Field::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MessageFormat$Field, serialVersionUID)},
		{"ARGUMENT", "Ljava/text/MessageFormat$Field;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MessageFormat$Field, ARGUMENT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(MessageFormat$Field, init$, void, $String*)},
		{"readResolve", "()Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(MessageFormat$Field, readResolve, $Object*), "java.io.InvalidObjectException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.text.MessageFormat$Field", "java.text.MessageFormat", "Field", $PUBLIC | $STATIC},
		{"java.text.Format$Field", "java.text.Format", "Field", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.text.MessageFormat$Field",
		"java.text.Format$Field",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.text.MessageFormat"
	};
	$loadClass(MessageFormat$Field, name, initialize, &classInfo$$, MessageFormat$Field::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MessageFormat$Field);
	});
	return class$;
}

$Class* MessageFormat$Field::class$ = nullptr;

	} // text
} // java