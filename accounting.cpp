#include "constants.h"

#include "invoice.h"
#include "entry.h"
#include "transaction.h"
#include "account.h"
#include "job.h"
#include "receipt.h"
#include "merchant.h"

#include <QApplication>
int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    return app.exec();
}
