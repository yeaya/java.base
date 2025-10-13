#include <java/util/jar/Attributes.h>

#include <java/io/DataOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/jar/Attributes$Name.h>
#include <java/util/jar/Manifest$FastInputStream.h>
#include <java/util/jar/Manifest.h>
#include <sun/nio/cs/UTF_8.h>
#include <sun/nio/cs/Unicode.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef INSTANCE
#undef MANIFEST_VERSION
#undef SIGNATURE_VERSION

using $DataOutputStream = ::java::io::DataOutputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Attributes$Name = ::java::util::jar::Attributes$Name;
using $Manifest = ::java::util::jar::Manifest;
using $Manifest$FastInputStream = ::java::util::jar::Manifest$FastInputStream;
using $UTF_8 = ::sun::nio::cs::UTF_8;
using $Unicode = ::sun::nio::cs::Unicode;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace java {
	namespace util {
		namespace jar {

$FieldInfo _Attributes_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;", $PROTECTED, $field(Attributes, map)},
	{}
};

$MethodInfo _Attributes_MethodInfo_[] = {
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Attributes::*)()>(&Attributes::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Attributes::*)(int32_t)>(&Attributes::init$))},
	{"<init>", "(Ljava/util/jar/Attributes;)V", nullptr, $PUBLIC, $method(static_cast<void(Attributes::*)(Attributes*)>(&Attributes::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "(Ljava/util/jar/Attributes$Name;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"keySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Object;>;", $PUBLIC},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"putAll", "(Ljava/util/Map;)V", "(Ljava/util/Map<**>;)V", $PUBLIC},
	{"putValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"read", "(Ljava/util/jar/Manifest$FastInputStream;[B)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"read", "(Ljava/util/jar/Manifest$FastInputStream;[BLjava/lang/String;I)I", nullptr, 0, nullptr, "java.io.IOException"},
	{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"values", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/lang/Object;>;", $PUBLIC},
	{"write", "(Ljava/io/DataOutputStream;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"writeMain", "(Ljava/io/DataOutputStream;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Attributes_InnerClassesInfo_[] = {
	{"java.util.jar.Attributes$Name", "java.util.jar.Attributes", "Name", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Attributes_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.jar.Attributes",
	"java.lang.Object",
	"java.util.Map,java.lang.Cloneable",
	_Attributes_FieldInfo_,
	_Attributes_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;Ljava/lang/Cloneable;",
	nullptr,
	_Attributes_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.jar.Attributes$Name"
};

$Object* allocate$Attributes($Class* clazz) {
	return $of($alloc(Attributes));
}

$String* Attributes::toString() {
	 return this->$Map::toString();
}

void Attributes::finalize() {
	this->$Map::finalize();
}

void Attributes::init$() {
	Attributes::init$(11);
}

void Attributes::init$(int32_t size) {
	$set(this, map, $new($LinkedHashMap, size));
}

void Attributes::init$(Attributes* attr) {
	$set(this, map, $new($LinkedHashMap, static_cast<$Map*>(attr)));
}

$Object* Attributes::get(Object$* name) {
	return $of($nc(this->map)->get(name));
}

$String* Attributes::getValue($String* name) {
	return $cast($String, get($($Attributes$Name::of(name))));
}

$String* Attributes::getValue($Attributes$Name* name) {
	return $cast($String, get(name));
}

$Object* Attributes::put(Object$* name, Object$* value) {
	return $of($nc(this->map)->put($cast($Attributes$Name, name), $cast($String, value)));
}

$String* Attributes::putValue($String* name, $String* value) {
	return $cast($String, put($($Attributes$Name::of(name)), value));
}

$Object* Attributes::remove(Object$* name) {
	return $of($nc(this->map)->remove(name));
}

bool Attributes::containsValue(Object$* value) {
	return $nc(this->map)->containsValue(value);
}

bool Attributes::containsKey(Object$* name) {
	return $nc(this->map)->containsKey(name);
}

void Attributes::putAll($Map* attr) {
	if (!Attributes::class$->isInstance(attr)) {
		$throwNew($ClassCastException);
	}
	{
		$var($Iterator, i$, $nc($($nc((attr))->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, me, $cast($Map$Entry, i$->next()));
			$var($Object, var$0, $nc(me)->getKey());
			put(var$0, $(me->getValue()));
		}
	}
}

void Attributes::clear() {
	$nc(this->map)->clear();
}

int32_t Attributes::size() {
	return $nc(this->map)->size();
}

bool Attributes::isEmpty() {
	return $nc(this->map)->isEmpty();
}

$Set* Attributes::keySet() {
	return $nc(this->map)->keySet();
}

$Collection* Attributes::values() {
	return $nc(this->map)->values();
}

$Set* Attributes::entrySet() {
	return $nc(this->map)->entrySet();
}

bool Attributes::equals(Object$* o) {
	return $nc(this->map)->equals(o);
}

int32_t Attributes::hashCode() {
	return $nc(this->map)->hashCode();
}

$Object* Attributes::clone() {
	return $of($new(Attributes, this));
}

void Attributes::write($DataOutputStream* out) {
	$var($StringBuilder, buffer, $new($StringBuilder, 72));
	{
		$var($Iterator, i$, $nc($(entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				buffer->setLength(0);
				buffer->append($($nc($of($($nc(e)->getKey())))->toString()));
				buffer->append(": "_s);
				buffer->append($($nc(e)->getValue()));
				$Manifest::println72(out, $(buffer->toString()));
			}
		}
	}
	$Manifest::println(out);
}

void Attributes::writeMain($DataOutputStream* out) {
	$var($StringBuilder, buffer, $new($StringBuilder, 72));
	$init($Attributes$Name);
	$var($String, vername, $nc($Attributes$Name::MANIFEST_VERSION)->toString());
	$var($String, version, getValue(vername));
	if (version == nullptr) {
		$assign(vername, $nc($Attributes$Name::SIGNATURE_VERSION)->toString());
		$assign(version, getValue(vername));
	}
	if (version != nullptr) {
		buffer->append(vername);
		buffer->append(": "_s);
		buffer->append(version);
		$init($UTF_8);
		$nc(out)->write($($nc($(buffer->toString()))->getBytes(static_cast<$Charset*>($UTF_8::INSTANCE))));
		$Manifest::println(out);
	}
	{
		$var($Iterator, i$, $nc($(entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				$var($String, name, $nc(($cast($Attributes$Name, $($nc(e)->getKey()))))->toString());
				if ((version != nullptr) && !($nc(name)->equalsIgnoreCase(vername))) {
					buffer->setLength(0);
					buffer->append(name);
					buffer->append(": "_s);
					buffer->append($(e->getValue()));
					$Manifest::println72(out, $(buffer->toString()));
				}
			}
		}
	}
	$Manifest::println(out);
}

void Attributes::read($Manifest$FastInputStream* is, $bytes* lbuf) {
	read(is, lbuf, nullptr, 0);
}

int32_t Attributes::read($Manifest$FastInputStream* is, $bytes* lbuf, $String* filename, int32_t lineNumber) {
	$var($String, name, nullptr);
	$var($String, value, nullptr);
	$var($bytes, lastline, nullptr);
	int32_t len = 0;
	while ((len = $nc(is)->readLine(lbuf)) != -1) {
		bool lineContinued = false;
		int8_t c = $nc(lbuf)->get(--len);
		++lineNumber;
		if (c != u'\n' && c != u'\r') {
			$throwNew($IOException, $$str({"line too long ("_s, $($Manifest::getErrorPosition(filename, lineNumber)), ")"_s}));
		}
		if (len > 0 && lbuf->get(len - 1) == u'\r') {
			--len;
		}
		if (len == 0) {
			break;
		}
		int32_t i = 0;
		if (lbuf->get(0) == u' ') {
			if (name == nullptr) {
				$throwNew($IOException, $$str({"misplaced continuation line ("_s, $($Manifest::getErrorPosition(filename, lineNumber)), ")"_s}));
			}
			lineContinued = true;
			$var($bytes, buf, $new($bytes, $nc(lastline)->length + len - 1));
			$System::arraycopy(lastline, 0, buf, 0, lastline->length);
			$System::arraycopy(lbuf, 1, buf, lastline->length, len - 1);
			if (is->peek() == u' ') {
				$assign(lastline, buf);
				continue;
			}
			$init($UTF_8);
			$assign(value, $new($String, buf, 0, buf->length, static_cast<$Charset*>($UTF_8::INSTANCE)));
			$assign(lastline, nullptr);
		} else {
			while (lbuf->get(i++) != u':') {
				if (i >= len) {
					$throwNew($IOException, $$str({"invalid header field ("_s, $($Manifest::getErrorPosition(filename, lineNumber)), ")"_s}));
				}
			}
			if (lbuf->get(i++) != u' ') {
				$throwNew($IOException, $$str({"invalid header field ("_s, $($Manifest::getErrorPosition(filename, lineNumber)), ")"_s}));
			}
			$init($UTF_8);
			$assign(name, $new($String, lbuf, 0, i - 2, static_cast<$Charset*>($UTF_8::INSTANCE)));
			if (is->peek() == u' ') {
				$assign(lastline, $new($bytes, len - i));
				$System::arraycopy(lbuf, i, lastline, 0, len - i);
				continue;
			}
			$assign(value, $new($String, lbuf, i, len - i, static_cast<$Charset*>($UTF_8::INSTANCE)));
		}
		try {
			if ((putValue(name, value) != nullptr) && (!lineContinued)) {
				$nc($($PlatformLogger::getLogger("java.util.jar"_s)))->warning($$str({"Duplicate name in Manifest: "_s, name, ".\nEnsure that the manifest does not have duplicate entries, and\nthat blank lines separate individual sections in both your\nmanifest and in the META-INF/MANIFEST.MF entry in the jar file."_s}));
			}
		} catch ($IllegalArgumentException&) {
			$var($IllegalArgumentException, e, $catch());
			$throwNew($IOException, $$str({"invalid header field name: "_s, name, " ("_s, $($Manifest::getErrorPosition(filename, lineNumber)), ")"_s}));
		}
	}
	return lineNumber;
}

Attributes::Attributes() {
}

$Class* Attributes::load$($String* name, bool initialize) {
	$loadClass(Attributes, name, initialize, &_Attributes_ClassInfo_, allocate$Attributes);
	return class$;
}

$Class* Attributes::class$ = nullptr;

		} // jar
	} // util
} // java