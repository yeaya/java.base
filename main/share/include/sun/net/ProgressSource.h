#ifndef _sun_net_ProgressSource_h_
#define _sun_net_ProgressSource_h_
//$ class sun.net.ProgressSource
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class URL;
	}
}
namespace sun {
	namespace net {
		class ProgressMonitor;
		class ProgressSource$State;
	}
}

namespace sun {
	namespace net {

class $import ProgressSource : public ::java::lang::Object {
	$class(ProgressSource, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ProgressSource();
	void init$(::java::net::URL* url, $String* method);
	void init$(::java::net::URL* url, $String* method, int64_t expected);
	virtual void beginTracking();
	virtual $Object* clone() override;
	virtual void close();
	virtual bool connected();
	virtual void finishTracking();
	virtual $String* getContentType();
	virtual int64_t getExpected();
	virtual $String* getMethod();
	virtual int64_t getProgress();
	virtual ::sun::net::ProgressSource$State* getState();
	virtual ::java::net::URL* getURL();
	virtual void setContentType($String* ct);
	virtual $String* toString() override;
	virtual void updateProgress(int64_t latestProgress, int64_t expectedProgress);
	::java::net::URL* url = nullptr;
	$String* method = nullptr;
	$String* contentType = nullptr;
	int64_t progress = 0;
	int64_t lastProgress = 0;
	int64_t expected = 0;
	::sun::net::ProgressSource$State* state = nullptr;
	bool connected$ = false;
	int32_t threshold = 0;
	::sun::net::ProgressMonitor* progressMonitor = nullptr;
};

	} // net
} // sun

#endif // _sun_net_ProgressSource_h_