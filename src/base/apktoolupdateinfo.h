#ifndef APKTOOLUPDATEINFO_H
#define APKTOOLUPDATEINFO_H

#include "base/iupdateinfo.h"
#include <QNetworkAccessManager>

class ApktoolUpdateInfo final : public IUpdateInfo
{
public:
    ApktoolUpdateInfo(QObject *parent = nullptr);

    QString getApplicationName() const override;
    QString getCurrentVersion() const override;
    QString getLatestVersion() const override;
    QString getWhatsNewUrl() const override;
    QIcon getApplicationIcon() const override;
    void download(QWidget *parent = nullptr) override;
    void refresh() override;

private:
    QString currentVersion;
    QNetworkAccessManager http;
};

#endif // APKTOOLUPDATEINFO_H
