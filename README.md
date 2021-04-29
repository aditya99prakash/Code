node {
    stage('Preparation') {
        git 'https://github.com/aditya99prakash/sample-node-project.git'
    }
    
   
    stage('install'){
         nodejs('NodeJS') {
    // some block
    bat 'npm install'
}
      
    }
    stage('Scan') {
        snykSecurity  severity: 'medium', snykInstallation: 'Snyk', snykTokenId: '3566ef6e-8ba0-4d2f-9859-d8e6c3223ce7', targetFile: 'package.json'
    }
 
}
