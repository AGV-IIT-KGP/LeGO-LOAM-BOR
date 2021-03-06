#include <pcl/point_types.h>
#include <pcl/point_cloud.h>
#include <gtsam/nonlinear/ISAM2.h>
#include <gtsam/nonlinear/Values.h>
#include "lego_loam/utility.h"
#include <sensor_msgs/NavSatFix.h>

void dump(
    const std::string& dump_directory, // the directory where map is saved "/tmp/dump"
    const gtsam::ISAM2& isam,
    const gtsam::Values& isam_current_estimate,
    const std::vector<double>& keyframe_stamps,
    const std::vector<pcl::PointCloud<pcl::PointXYZI>::Ptr>& corner_cloud_keyframes,
    const std::vector<pcl::PointCloud<pcl::PointXYZI>::Ptr>& surf_cloud_keyframes,
    const std::vector<pcl::PointCloud<pcl::PointXYZI>::Ptr>& outlier_cloud_keyframes,
    const pcl::PointCloud<pcl::PointXYZI>::Ptr& cloudKeyPoses3D,
    const pcl::PointCloud<PointTypePose>::Ptr& cloudKeyPoses6D,
    const std::vector<sensor_msgs::NavSatFix>& gps_data
);