#include <java/nio/charset/CharsetDecoder.h>

#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CoderMalfunctionError.h>
#include <java/nio/charset/CoderResult.h>
#include <java/nio/charset/CodingErrorAction.h>
#include <jcpp.h>

#undef IGNORE
#undef OVERFLOW
#undef REPLACE
#undef REPORT
#undef ST_CODING
#undef ST_END
#undef ST_FLUSHED
#undef ST_RESET
#undef UNDERFLOW

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CoderMalfunctionError = ::java::nio::charset::CoderMalfunctionError;
using $CoderResult = ::java::nio::charset::CoderResult;
using $CodingErrorAction = ::java::nio::charset::CodingErrorAction;

namespace java {
	namespace nio {
		namespace charset {

$FieldInfo _CharsetDecoder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CharsetDecoder, $assertionsDisabled)},
	{"charset", "Ljava/nio/charset/Charset;", nullptr, $PRIVATE | $FINAL, $field(CharsetDecoder, charset$)},
	{"averageCharsPerByte", "F", nullptr, $PRIVATE | $FINAL, $field(CharsetDecoder, averageCharsPerByte$)},
	{"maxCharsPerByte", "F", nullptr, $PRIVATE | $FINAL, $field(CharsetDecoder, maxCharsPerByte$)},
	{"replacement", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CharsetDecoder, replacement$)},
	{"malformedInputAction", "Ljava/nio/charset/CodingErrorAction;", nullptr, $PRIVATE, $field(CharsetDecoder, malformedInputAction$)},
	{"unmappableCharacterAction", "Ljava/nio/charset/CodingErrorAction;", nullptr, $PRIVATE, $field(CharsetDecoder, unmappableCharacterAction$)},
	{"ST_RESET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CharsetDecoder, ST_RESET)},
	{"ST_CODING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CharsetDecoder, ST_CODING)},
	{"ST_END", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CharsetDecoder, ST_END)},
	{"ST_FLUSHED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CharsetDecoder, ST_FLUSHED)},
	{"state", "I", nullptr, $PRIVATE, $field(CharsetDecoder, state)},
	{"stateNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(CharsetDecoder, stateNames)},
	{}
};

$MethodInfo _CharsetDecoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;FFLjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(CharsetDecoder::*)($Charset*,float,float,$String*)>(&CharsetDecoder::init$))},
	{"<init>", "(Ljava/nio/charset/Charset;FF)V", nullptr, $PROTECTED, $method(static_cast<void(CharsetDecoder::*)($Charset*,float,float)>(&CharsetDecoder::init$))},
	{"averageCharsPerByte", "()F", nullptr, $PUBLIC | $FINAL, $method(static_cast<float(CharsetDecoder::*)()>(&CharsetDecoder::averageCharsPerByte))},
	{"charset", "()Ljava/nio/charset/Charset;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Charset*(CharsetDecoder::*)()>(&CharsetDecoder::charset))},
	{"decode", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;Z)Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$CoderResult*(CharsetDecoder::*)($ByteBuffer*,$CharBuffer*,bool)>(&CharsetDecoder::decode))},
	{"decode", "(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$CharBuffer*(CharsetDecoder::*)($ByteBuffer*)>(&CharsetDecoder::decode)), "java.nio.charset.CharacterCodingException"},
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED | $ABSTRACT},
	{"detectedCharset", "()Ljava/nio/charset/Charset;", nullptr, $PUBLIC},
	{"flush", "(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$CoderResult*(CharsetDecoder::*)($CharBuffer*)>(&CharsetDecoder::flush))},
	{"implFlush", "(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"implOnMalformedInput", "(Ljava/nio/charset/CodingErrorAction;)V", nullptr, $PROTECTED},
	{"implOnUnmappableCharacter", "(Ljava/nio/charset/CodingErrorAction;)V", nullptr, $PROTECTED},
	{"implReplaceWith", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"implReset", "()V", nullptr, $PROTECTED},
	{"isAutoDetecting", "()Z", nullptr, $PUBLIC},
	{"isCharsetDetected", "()Z", nullptr, $PUBLIC},
	{"malformedInputAction", "()Ljava/nio/charset/CodingErrorAction;", nullptr, $PUBLIC},
	{"maxCharsPerByte", "()F", nullptr, $PUBLIC | $FINAL, $method(static_cast<float(CharsetDecoder::*)()>(&CharsetDecoder::maxCharsPerByte))},
	{"onMalformedInput", "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC | $FINAL, $method(static_cast<CharsetDecoder*(CharsetDecoder::*)($CodingErrorAction*)>(&CharsetDecoder::onMalformedInput))},
	{"onUnmappableCharacter", "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC | $FINAL, $method(static_cast<CharsetDecoder*(CharsetDecoder::*)($CodingErrorAction*)>(&CharsetDecoder::onUnmappableCharacter))},
	{"replaceWith", "(Ljava/lang/String;)Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC | $FINAL, $method(static_cast<CharsetDecoder*(CharsetDecoder::*)($String*)>(&CharsetDecoder::replaceWith))},
	{"replacement", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(CharsetDecoder::*)()>(&CharsetDecoder::replacement))},
	{"reset", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC | $FINAL, $method(static_cast<CharsetDecoder*(CharsetDecoder::*)()>(&CharsetDecoder::reset))},
	{"throwIllegalStateException", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(CharsetDecoder::*)(int32_t,int32_t)>(&CharsetDecoder::throwIllegalStateException))},
	{"unmappableCharacterAction", "()Ljava/nio/charset/CodingErrorAction;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CharsetDecoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.charset.CharsetDecoder",
	"java.lang.Object",
	nullptr,
	_CharsetDecoder_FieldInfo_,
	_CharsetDecoder_MethodInfo_
};

$Object* allocate$CharsetDecoder($Class* clazz) {
	return $of($alloc(CharsetDecoder));
}

bool CharsetDecoder::$assertionsDisabled = false;
$StringArray* CharsetDecoder::stateNames = nullptr;

void CharsetDecoder::init$($Charset* cs, float averageCharsPerByte, float maxCharsPerByte, $String* replacement) {
	$init($CodingErrorAction);
	$set(this, malformedInputAction$, $CodingErrorAction::REPORT);
	$set(this, unmappableCharacterAction$, $CodingErrorAction::REPORT);
	this->state = CharsetDecoder::ST_RESET;
	$set(this, charset$, cs);
	if (!(averageCharsPerByte > 0.0f)) {
		$throwNew($IllegalArgumentException, "Non-positive averageCharsPerByte"_s);
	}
	if (!(maxCharsPerByte > 0.0f)) {
		$throwNew($IllegalArgumentException, "Non-positive maxCharsPerByte"_s);
	}
	if (averageCharsPerByte > maxCharsPerByte) {
		$throwNew($IllegalArgumentException, "averageCharsPerByte exceeds maxCharsPerByte"_s);
	}
	$set(this, replacement$, replacement);
	this->averageCharsPerByte$ = averageCharsPerByte;
	this->maxCharsPerByte$ = maxCharsPerByte;
	replaceWith(replacement);
}

void CharsetDecoder::init$($Charset* cs, float averageCharsPerByte, float maxCharsPerByte) {
	CharsetDecoder::init$(cs, averageCharsPerByte, maxCharsPerByte, u"\ufffd"_s);
}

$Charset* CharsetDecoder::charset() {
	return this->charset$;
}

$String* CharsetDecoder::replacement() {
	return this->replacement$;
}

CharsetDecoder* CharsetDecoder::replaceWith($String* newReplacement) {
	if (newReplacement == nullptr) {
		$throwNew($IllegalArgumentException, "Null replacement"_s);
	}
	int32_t len = $nc(newReplacement)->length();
	if (len == 0) {
		$throwNew($IllegalArgumentException, "Empty replacement"_s);
	}
	if (len > this->maxCharsPerByte$) {
		$throwNew($IllegalArgumentException, "Replacement too long"_s);
	}
	$set(this, replacement$, newReplacement);
	implReplaceWith(this->replacement$);
	return this;
}

void CharsetDecoder::implReplaceWith($String* newReplacement) {
}

$CodingErrorAction* CharsetDecoder::malformedInputAction() {
	return this->malformedInputAction$;
}

CharsetDecoder* CharsetDecoder::onMalformedInput($CodingErrorAction* newAction) {
	if (newAction == nullptr) {
		$throwNew($IllegalArgumentException, "Null action"_s);
	}
	$set(this, malformedInputAction$, newAction);
	implOnMalformedInput(newAction);
	return this;
}

void CharsetDecoder::implOnMalformedInput($CodingErrorAction* newAction) {
}

$CodingErrorAction* CharsetDecoder::unmappableCharacterAction() {
	return this->unmappableCharacterAction$;
}

CharsetDecoder* CharsetDecoder::onUnmappableCharacter($CodingErrorAction* newAction) {
	if (newAction == nullptr) {
		$throwNew($IllegalArgumentException, "Null action"_s);
	}
	$set(this, unmappableCharacterAction$, newAction);
	implOnUnmappableCharacter(newAction);
	return this;
}

void CharsetDecoder::implOnUnmappableCharacter($CodingErrorAction* newAction) {
}

float CharsetDecoder::averageCharsPerByte() {
	return this->averageCharsPerByte$;
}

float CharsetDecoder::maxCharsPerByte() {
	return this->maxCharsPerByte$;
}

$CoderResult* CharsetDecoder::decode($ByteBuffer* in, $CharBuffer* out, bool endOfInput) {
	$useLocalCurrentObjectStackCache();
	int32_t newState = endOfInput ? CharsetDecoder::ST_END : CharsetDecoder::ST_CODING;
	if ((this->state != CharsetDecoder::ST_RESET) && (this->state != CharsetDecoder::ST_CODING) && !(endOfInput && (this->state == CharsetDecoder::ST_END))) {
		throwIllegalStateException(this->state, newState);
	}
	this->state = newState;
	for (;;) {
		$var($CoderResult, cr, nullptr);
		try {
			$assign(cr, decodeLoop(in, out));
		} catch ($RuntimeException& x) {
			$throwNew($CoderMalfunctionError, x);
		}
		if ($nc(cr)->isOverflow()) {
			return cr;
		}
		if ($nc(cr)->isUnderflow()) {
			if (endOfInput && $nc(in)->hasRemaining()) {
				$assign(cr, $CoderResult::malformedForLength(in->remaining()));
			} else {
				return cr;
			}
		}
		$var($CodingErrorAction, action, nullptr);
		if ($nc(cr)->isMalformed()) {
			$assign(action, this->malformedInputAction$);
		} else if (cr->isUnmappable()) {
			$assign(action, this->unmappableCharacterAction$);
		} else if (!CharsetDecoder::$assertionsDisabled) {
			$throwNew($AssertionError, $($of(cr->toString())));
		}
		$init($CodingErrorAction);
		if (action == $CodingErrorAction::REPORT) {
			return cr;
		}
		if (action == $CodingErrorAction::REPLACE) {
			int32_t var$0 = $nc(out)->remaining();
			if (var$0 < $nc(this->replacement$)->length()) {
				return $CoderResult::OVERFLOW;
			}
			$nc(out)->put(this->replacement$);
		}
		if ((action == $CodingErrorAction::IGNORE) || (action == $CodingErrorAction::REPLACE)) {
			int32_t var$1 = in->position();
			$nc(in)->position(var$1 + $nc(cr)->length());
			continue;
		}
		if (!CharsetDecoder::$assertionsDisabled) {
			$throwNew($AssertionError);
		}
	}
}

$CoderResult* CharsetDecoder::flush($CharBuffer* out) {
	if (this->state == CharsetDecoder::ST_END) {
		$var($CoderResult, cr, implFlush(out));
		if ($nc(cr)->isUnderflow()) {
			this->state = CharsetDecoder::ST_FLUSHED;
		}
		return cr;
	}
	if (this->state != CharsetDecoder::ST_FLUSHED) {
		throwIllegalStateException(this->state, CharsetDecoder::ST_FLUSHED);
	}
	$init($CoderResult);
	return $CoderResult::UNDERFLOW;
}

$CoderResult* CharsetDecoder::implFlush($CharBuffer* out) {
	$init($CoderResult);
	return $CoderResult::UNDERFLOW;
}

CharsetDecoder* CharsetDecoder::reset() {
	implReset();
	this->state = CharsetDecoder::ST_RESET;
	return this;
}

void CharsetDecoder::implReset() {
}

$CharBuffer* CharsetDecoder::decode($ByteBuffer* in) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(in)->remaining();
	int32_t n = $cast(int32_t, (var$0 * averageCharsPerByte()));
	$var($CharBuffer, out, $CharBuffer::allocate(n));
	if ((n == 0) && (in->remaining() == 0)) {
		return out;
	}
	reset();
	for (;;) {
		$init($CoderResult);
		$var($CoderResult, cr, in->hasRemaining() ? decode(in, out, true) : $CoderResult::UNDERFLOW);
		if ($nc(cr)->isUnderflow()) {
			$assign(cr, flush(out));
		}
		if ($nc(cr)->isUnderflow()) {
			break;
		}
		if ($nc(cr)->isOverflow()) {
			n = 2 * n + 1;
			$var($CharBuffer, o, $CharBuffer::allocate(n));
			$nc(out)->flip();
			$nc(o)->put(out);
			$assign(out, o);
			continue;
		}
		$nc(cr)->throwException();
	}
	$nc(out)->flip();
	return out;
}

bool CharsetDecoder::isAutoDetecting() {
	return false;
}

bool CharsetDecoder::isCharsetDetected() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Charset* CharsetDecoder::detectedCharset() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void CharsetDecoder::throwIllegalStateException(int32_t from, int32_t to) {
	$throwNew($IllegalStateException, $$str({"Current state = "_s, $nc(CharsetDecoder::stateNames)->get(from), ", new state = "_s, $nc(CharsetDecoder::stateNames)->get(to)}));
}

void clinit$CharsetDecoder($Class* class$) {
	CharsetDecoder::$assertionsDisabled = !CharsetDecoder::class$->desiredAssertionStatus();
	$assignStatic(CharsetDecoder::stateNames, $new($StringArray, {
		"RESET"_s,
		"CODING"_s,
		"CODING_END"_s,
		"FLUSHED"_s
	}));
}

CharsetDecoder::CharsetDecoder() {
}

$Class* CharsetDecoder::load$($String* name, bool initialize) {
	$loadClass(CharsetDecoder, name, initialize, &_CharsetDecoder_ClassInfo_, clinit$CharsetDecoder, allocate$CharsetDecoder);
	return class$;
}

$Class* CharsetDecoder::class$ = nullptr;

		} // charset
	} // nio
} // java