#include <Ready$BoundedReader.h>
#include <Ready.h>
#include <java/io/Reader.h>
#include <jcpp.h>

using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void Ready$BoundedReader::init$($String* content) {
	$Reader::init$();
	this->pos = 0;
	this->limit = $nc(content)->length();
	$set(this, content, $new($chars, this->limit));
	content->getChars(0, this->limit, this->content, 0);
}

int32_t Ready$BoundedReader::read() {
	if (this->pos >= this->limit) {
		$throwNew($RuntimeException, "Hit infinite wait condition"_s);
	}
	return $nc(this->content)->get(this->pos++);
}

int32_t Ready$BoundedReader::read($chars* buf, int32_t offset, int32_t length) {
	if (this->pos >= this->limit) {
		$throwNew($RuntimeException, "Hit infinite wait condition"_s);
	}
	int32_t oldPos = this->pos;
	int32_t readlen = (length > (this->limit - this->pos)) ? (this->limit - this->pos) : length;
	for (int32_t i = offset; i < readlen; ++i) {
		$nc(buf)->set(i, (char16_t)read());
	}
	return (this->pos - oldPos);
}

void Ready$BoundedReader::close() {
}

bool Ready$BoundedReader::ready() {
	if (this->pos < this->limit) {
		return true;
	} else {
		return false;
	}
}

Ready$BoundedReader::Ready$BoundedReader() {
}

$Class* Ready$BoundedReader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"content", "[C", nullptr, $PRIVATE, $field(Ready$BoundedReader, content)},
		{"limit", "I", nullptr, $PRIVATE, $field(Ready$BoundedReader, limit)},
		{"pos", "I", nullptr, $PRIVATE, $field(Ready$BoundedReader, pos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Ready$BoundedReader, init$, void, $String*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Ready$BoundedReader, close, void)},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(Ready$BoundedReader, read, int32_t), "java.io.IOException"},
		{"read", "([CII)I", nullptr, $PUBLIC, $virtualMethod(Ready$BoundedReader, read, int32_t, $chars*, int32_t, int32_t), "java.io.IOException"},
		{"ready", "()Z", nullptr, $PUBLIC, $virtualMethod(Ready$BoundedReader, ready, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Ready$BoundedReader", "Ready", "BoundedReader", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Ready$BoundedReader",
		"java.io.Reader",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Ready"
	};
	$loadClass(Ready$BoundedReader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Ready$BoundedReader));
	});
	return class$;
}

$Class* Ready$BoundedReader::class$ = nullptr;