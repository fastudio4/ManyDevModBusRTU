#include "treemodel.h"

TreeModel::TreeModel(QObject *parent)
    : QAbstractItemModel(parent)
{

}

TreeModel::~TreeModel()
{

}

QModelIndex TreeModel::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex TreeModel::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int TreeModel::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;
    return ports.count();

    // FIXME: Implement me!
}

int TreeModel::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant TreeModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
