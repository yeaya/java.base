#include <java/util/regex/PatternSyntaxException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace regex {

void PatternSyntaxException::init$($String* desc, $String* regex, int32_t index) {
	$IllegalArgumentException::init$();
	$set(this, desc, desc);
	$set(this, pattern, regex);
	this->index = index;
}

int32_t PatternSyntaxException::getIndex() {
	return this->index;
}

$String* PatternSyntaxException::getDescription() {
	return this->desc;
}

$String* PatternSyntaxException::getPattern() {
	return this->pattern;
}

$String* PatternSyntaxException::getMessage() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append(this->desc);
	if (this->index >= 0) {
		sb->append(" near index "_s);
		sb->append(this->index);
	}
	sb->append($($System::lineSeparator()));
	sb->append(this->pattern);
	if (this->index >= 0 && this->pattern != nullptr && this->index < this->pattern->length()) {
		sb->append($($System::lineSeparator()));
		for (int32_t i = 0; i < this->index; ++i) {
			sb->append(u' ');
		}
		sb->append(u'^');
	}
	return sb->toString();
}

PatternSyntaxException::PatternSyntaxException() {
}

PatternSyntaxException::PatternSyntaxException(const PatternSyntaxException& e) : $IllegalArgumentException(e) {
}

void PatternSyntaxException::throw$() {
	throw *this;
}

$Class* PatternSyntaxException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PatternSyntaxException, serialVersionUID)},
		{"desc", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PatternSyntaxException, desc)},
		{"pattern", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PatternSyntaxException, pattern)},
		{"index", "I", nullptr, $PRIVATE | $FINAL, $field(PatternSyntaxException, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(PatternSyntaxException, init$, void, $String*, $String*, int32_t)},
		{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PatternSyntaxException, getDescription, $String*)},
		{"getIndex", "()I", nullptr, $PUBLIC, $virtualMethod(PatternSyntaxException, getIndex, int32_t)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PatternSyntaxException, getMessage, $String*)},
		{"getPattern", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PatternSyntaxException, getPattern, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.regex.PatternSyntaxException",
		"java.lang.IllegalArgumentException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PatternSyntaxException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PatternSyntaxException);
	});
	return class$;
}

$Class* PatternSyntaxException::class$ = nullptr;

		} // regex
	} // util
} // java